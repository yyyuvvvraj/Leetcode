class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int,int>> A, B;

        int n = img1.size();

        // Store coordinates of all 1s
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img1[i][j] == 1) A.push_back({i, j});
                if (img2[i][j] == 1) B.push_back({i, j});
            }
        }

        map<pair<int,int>, int> freq;
        int ans = 0;

        // Count each translation vector
        for (auto &a : A) {
            for (auto &b : B) {
                pair<int,int> shift = {b.first - a.first, b.second - a.second};
                ans = max(ans, ++freq[shift]);
            }
        }

        return ans;
    }
};