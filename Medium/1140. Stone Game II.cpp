class Solution {
public:
    int helper(int i, int m, vector<int>& piles, vector<vector<int>>& v) {
        if (i >= piles.size())
            return 0;

        if (v[i][m] != -1)
            return v[i][m];

        int range = 2 * m;

        int sum = 0;
        int pickValue = INT_MIN;

        for (int j = 1; i + j <= piles.size() && j <= range; j++) {
            sum += piles[i + j - 1];

            pickValue = max(
                pickValue,
                sum - helper(i + j, max(m, j), piles, v)
            );
        }

        return v[i][m] = pickValue;
    }

    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        int m = 1;

        vector<vector<int>> v(n + 1, vector<int>(n + 1, -1));

        int diff = helper(0, m, piles, v);

        int sum = 0;
        for (auto& val : piles) {
            sum += val;
        }

        return (sum + diff) / 2;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 09/08/26.
//
