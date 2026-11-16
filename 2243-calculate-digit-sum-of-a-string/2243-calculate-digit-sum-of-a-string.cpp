class Solution {
public:
    string shorten(string s, int& k){
        int sum = 0;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(i != 0 and i % k == 0){
                ans += to_string(sum);
                sum = 0;
            }
            sum += (s[i] - '0');
        }
        ans += to_string(sum);
        return ans;
    }

    string digitSum(string s, int k) {
        while(s.length() > k){
            s = shorten(s,k);
        }
        return s;
    }
};