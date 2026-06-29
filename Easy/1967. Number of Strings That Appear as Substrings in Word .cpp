class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;

        for(int i = 0; i < patterns.size(); i++){
            if(word.find(patterns[i]) != string::npos){
                ans++;
            }
        }

        return ans;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 29/06/26.
//
