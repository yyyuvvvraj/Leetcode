#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int val : nums){ //For each element in the array nums 
            int freq = 0; //Declare the variable to count the frequency
            for ( int el : nums){ //This for loop is intiated to check the equivalence of the elements
            if(el == val){ //This contional is applied to check the equivalence of the element with the value that was intiated in the first loop
                freq ++; 
            }
        }
        if(freq > n/2){ //If the freq is greater than half the size of the array then we return the value
            return val;
        }
    }
    return -1;
        
    }
};
