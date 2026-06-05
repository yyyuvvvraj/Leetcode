class Solution {
public:
    struct Node {
        long long cnt;
        long long wav;
    };

    string s;

    Node dp[20][11][11][2][2];
    bool vis[20][11][11][2][2];

    Node dfs(int pos, int prev1, int prev2, bool tight, bool started) {
        if (pos == s.size()) {
            return {1, 0};
        }

        if (!tight && vis[pos][prev1][prev2][started][0])
            return dp[pos][prev1][prev2][started][0];

        int lim = tight ? s[pos] - '0' : 9;

        Node ans = {0, 0};

        for (int d = 0; d <= lim; d++) {
            bool ntight = tight && (d == lim);

            if (!started && d == 0) {
                Node nxt = dfs(pos + 1, 10, 10, ntight, false);
                ans.cnt += nxt.cnt;
                ans.wav += nxt.wav;
            } else {
                int add = 0;

                if (started && prev2 != 10) {
                    if ((prev1 > prev2 && prev1 > d) ||
                        (prev1 < prev2 && prev1 < d))
                        add = 1;
                }

                int nprev2, nprev1;

                if (!started) {
                    nprev2 = 10;
                    nprev1 = d;
                } else {
                    nprev2 = prev1;
                    nprev1 = d;
                }

                Node nxt = dfs(pos + 1, nprev1, nprev2, ntight, true);

                ans.cnt += nxt.cnt;
                ans.wav += nxt.wav + nxt.cnt * add;
            }
        }

        if (!tight) {
            vis[pos][prev1][prev2][started][0] = true;
            dp[pos][prev1][prev2][started][0] = ans;
        }

        return ans;
    }

    long long calc(long long x) {
        if (x < 0) return 0;

        s = to_string(x);
        memset(vis, 0, sizeof(vis));

        return dfs(0, 10, 10, true, false).wav;
    }

    long long totalWaviness(long long num1, long long num2) {
        return calc(num2) - calc(num1 - 1);
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 05/06/26.
//
