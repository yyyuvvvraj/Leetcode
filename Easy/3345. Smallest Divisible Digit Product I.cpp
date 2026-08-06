class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            int prod = 1;
            int cpy = n;
            while(cpy){
                int rightMostDigit = cpy % 10;
                prod = prod * rightMostDigit;
                cpy = cpy / 10;
            }
            if (prod % t == 0) return n;
            n++;
        }
        return 1;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 06/08/26.
//
