class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            count = 0;
            int temp = nums[i];

            while(temp > 0){
                count = count + temp % 10;
                temp = temp / 10;
            }

            if(count < min){
                min = count;
            }
        }

        return min;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 29/05/26.
//
