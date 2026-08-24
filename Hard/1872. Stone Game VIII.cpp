class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();

        // Prefix sums
        for (int i = 1; i < n; i++)
            stones[i] += stones[i - 1];

        int best = stones[n - 1];

        for (int i = n - 2; i >= 1; i--) {
            best = max(best, stones[i] - best);
        }

        return best;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 24/08/26.
//
