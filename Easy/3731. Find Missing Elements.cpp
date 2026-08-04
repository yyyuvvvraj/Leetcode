class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minEle = INT_MAX , maxEle = INT_MIN;
        unordered_map<int, bool> m;
        for(auto &val:nums){
            m[val] = true;
            maxEle = max(maxEle, val);
            minEle = min(minEle, val);
        }
        vector<int> ans;
        for(int i = minEle + 1; i < maxEle; i++){
            if(m.find(i) == m.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 04/08/26.
//
