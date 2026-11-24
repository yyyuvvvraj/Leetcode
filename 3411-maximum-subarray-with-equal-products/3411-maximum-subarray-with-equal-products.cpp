
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxNum = 0, globalLCM = 1;

        for (int x : nums) {
            maxNum = max(maxNum, x);
            globalLCM = lcm(globalLCM, x);
        }

        int limit = maxNum * globalLCM;
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int product = 1;
            int g = 0, l = 1;

            for (int j = i; j < n; j++) {
                product *= nums[j];

                if (product > limit)
                    break;

                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);

                if (product == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};
