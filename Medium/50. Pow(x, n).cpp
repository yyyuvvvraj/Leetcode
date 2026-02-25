class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n;
        double ans = 1;
        while(binForm > 0)[
            if(binForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        ]
        return ans;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 25/02/26.
//