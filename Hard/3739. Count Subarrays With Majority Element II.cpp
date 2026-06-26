class Fenwick {
public:
    vector<int> bit;
    int n;

    Fenwick(int sz) {
        n = sz;
        bit.assign(n + 1, 0);
    }

    void update(int idx, int val) {
        while (idx <= n) {
            bit[idx] += val;
            idx += idx & (-idx);
        }
    }

    int query(int idx) {
        int sum = 0;
        while (idx > 0) {
            sum += bit[idx];
            idx -= idx & (-idx);
        }
        return sum;
    }
};

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        int offset = n + 1;
        Fenwick ft(2 * n + 5);

        long long ans = 0;
        int pref = 0;

        // Prefix sum = 0 before the array starts.
        ft.update(offset, 1);

        for (int x : nums) {
            if (x == target)
                pref++;
            else
                pref--;

            // Count previous prefix sums < current prefix sum
            ans += ft.query(pref + offset - 1);

            // Insert current prefix sum
            ft.update(pref + offset, 1);
        }

        return ans;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 26/06/26.
//
