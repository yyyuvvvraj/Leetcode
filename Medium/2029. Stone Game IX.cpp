class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0, 0, 0};

        // Count numbers according to remainder when divided by 3
        for (int x : stones) {
            cnt[x % 3]++;
        }

        // If number of 0-remainder stones is even
        if (cnt[0] % 2 == 0) {
            return cnt[1] > 0 && cnt[2] > 0;
        }

        // If number of 0-remainder stones is odd
        return abs(cnt[1] - cnt[2]) > 2;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 16/08/26.
//
