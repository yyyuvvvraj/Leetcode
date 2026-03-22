class Solution {
public:
    int fib(int n) {
        if( n == 0 || n == 1){
            return n;
        }else{
            int last = fib(n - 1);
            int slast = fib(n - 2);
            return last + slast;
        }
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 22/03/26.
//