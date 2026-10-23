class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();

        int K = -1; //"1111111" (all bits set)

        for(int i = 0; i < n; i++) {
            if(nums[i] != i) {
                K = (K & nums[i]);
            }
        }

        return K == -1 ? 0 : K;
    }
};


//
// Created by Yuvraj Rajni Sachin Deshmukh on 23/10/26.
//
