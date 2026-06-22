class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;

        for(auto it : text){
            mp[it]++;
        }
        string s = "balloon";
        return min({mp['b'], mp['a'], (mp['l']/2), (mp['o']/2),mp['n']});
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 22/06/26.
//
