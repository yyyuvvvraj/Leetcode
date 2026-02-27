class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s; //Unique Triplet storing mechanism
        //BruteForce
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                for(int k = j + 1; k < nums.size(); k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> trip = {nums[i], nums[j], nums[k]};
                        sort(trip.begin(),trip.end());

                        if(s.find(trip) == s.end()){
                            s.insert(trip);
                            ans.push_back(trip);
                        }
                    }
                }
            }
        }
        return ans;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Optimal Approach (2-Pointer Approach)
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            int j = i + 1, k = n - 1;
            if(i > 0 && nums[i] == nums[i-1]) continue;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }else if(sum > 0){
                    k--;
                }else{
                    ans.push_back(nums[i],nums[j],nums[k]);
                    j++ , k--;

                    while(j < k && nums[j] == nums[j-1]) j++;
                }
            }

        }
        return ans;
};

//
// Created by Yuvraj Rajni Sachin Deshmukh on 26/02/26.
//