class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0])
                return a[1] > b[1];   // longer interval first
            return a[0] < b[0];
        });

        int count = 0;
        int maxEnd = -1;

        for (auto &interval : intervals) {
            if (interval[1] > maxEnd) {
                count++;
                maxEnd = interval[1];
            }
            // else this interval is covered
        }

        return count;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 07/07/26.
//
