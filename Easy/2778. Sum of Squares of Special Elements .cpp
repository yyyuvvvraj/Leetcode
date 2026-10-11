class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                int num = nums[i - 1];
                sum += num * num;
            }
        }

        return sum;
    }
};

//
// Created by Yuvraj Rajni Sachin Deshmukh on 11/10/26.
//
