class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        while(n){
            int rem = n % 10;
            ans.push_back(rem);
            n = n / 10;
        }
        sort(ans.begin(), ans.end());
        int size = ans.size();
        return ans[size - 1] * ans[size - 2];
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 25/07/26.
//
