class Solution {
public:
    bool checkString(string s) {
        int n = s.length();

        for (int i = 1; i < n; i++) {
            if (s[i - 1] == 'b' && s[i] == 'a')
                return false;
        }
        return true;
    }
};

//
// Created by Yuvraj Rajni Sachin Deshmukh on 22/11/26.
//
