class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            int total = 0;
            for(int v = nums[i]; v > 0; v /= 10) total += v % 10;
            if(total == i) return i;
        }
        return -1;
    }
};