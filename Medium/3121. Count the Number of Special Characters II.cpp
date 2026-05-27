class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.length();
        vector<bool> lower(26,false);
        vector<bool> upper(26,false);

        for(char ch : word){
            if(ch >= 'a' && ch <= 'z'){
                if(upper[ch - 'a'] == false){
                    lower[ch - 'a'] = true;
                }else{
                    lower[ch - 'a'] = false;
                }
            }else{
                upper[ch - 'A'] = true;
            }
        }

        int ans = 0;
        for(int i = 0; i < 26; i++){
            if(lower[i] && upper[i]){
                ans++;
            }
        }
        return ans;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 27/05/26.
//
