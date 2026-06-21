class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(begin(costs), end(costs));

        int count = 0;

        for(int &cost : costs){
            if(cost > coins){
                return count;
            }else{
                count++;
                coins -= cost;
            }
        }

        return count;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 21/06/26.
//
