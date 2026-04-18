class Solution {
public:
    int reverse(int n){
        int rev = 0;
        while(n > 0){
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        int ans = 0;
        ans = abs(n - reverse(n));
        return ans;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 18/04/26.
//