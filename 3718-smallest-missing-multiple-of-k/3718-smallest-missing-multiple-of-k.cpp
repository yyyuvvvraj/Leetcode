class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        int curr = k;
        while(mp.find(curr) != mp.end()){
            curr += k;
        }
        return curr;
    }
};