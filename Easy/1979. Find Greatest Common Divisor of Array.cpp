class Solution {
public:
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }
    int findGCD(vector<int>& nums) {
        int smallest = nums[0] , largest = nums[0];
        for(int i = 1; i < nums.size(); i++){
            smallest = min(smallest, nums[i]);
            largest = max(largest, nums[i]);
        }

        int t = gcd(largest, smallest);
        return t;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 18/07/26.
//
