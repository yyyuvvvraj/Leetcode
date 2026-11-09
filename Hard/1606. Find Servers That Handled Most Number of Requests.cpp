
class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        set<int> available;
        set<pair<int, int>> busy;

        vector<int> cnt(k, 0);

        for (int i = 0; i < k; i++) {
            available.insert(i);
        }

        for (int i = 0; i < arrival.size(); i++) {

            // Free servers whose requests have finished
            while (!busy.empty() && busy.begin()->first <= arrival[i]) {
                available.insert(busy.begin()->second);
                busy.erase(busy.begin());
            }

            // No server available
            if (available.empty()) continue;

            // Preferred server
            int target = i % k;

            auto it = available.lower_bound(target);

            // Wrap around if necessary
            if (it == available.end()) {
                it = available.begin();
            }

            int server = *it;

            // Assign request
            available.erase(it);
            busy.insert({arrival[i] + load[i], server});

            cnt[server]++;
        }

        // Find maximum requests handled
        int mx = *max_element(cnt.begin(), cnt.end());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            if (cnt[i] == mx) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

//
// Created by Yuvraj Rajni Sachin Deshmukh on 09/11/26.
//
