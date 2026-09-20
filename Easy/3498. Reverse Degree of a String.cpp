class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size(), total = 0;
        for (int i = 0; i < n; ++i) {
            // Forward rank plus reverse rank is always 27, so the
            // reverse rank is the distance back to 'z', inclusive.
            int value = 'z' - s[i] + 1;

            // The statement counts positions from 1, not from 0.
            int position = i + 1;

            total += value * position;
        }
        // 26 * (1000 * 1001 / 2) = 13013000, well inside an int.
        return total;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 20/09/26.
//
