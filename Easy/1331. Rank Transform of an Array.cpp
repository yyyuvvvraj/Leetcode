class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;

        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());

        unordered_map<int, int> mp;
        for (int i = 0; i < temp.size(); i++) {
            mp[temp[i]] = i + 1;
        }

        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = mp[arr[i]];
        }

        return ans;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 12/07/26.
//
