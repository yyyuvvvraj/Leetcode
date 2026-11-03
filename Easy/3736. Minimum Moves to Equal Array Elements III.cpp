
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());

        int moves = 0;

        for (int num : nums) {
            moves += mx - num;
        }

        return moves;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 03/11/26.
//
