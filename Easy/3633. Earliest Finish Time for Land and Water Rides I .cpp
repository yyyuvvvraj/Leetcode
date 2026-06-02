class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        int land = INT_MAX;
        int water = INT_MAX;
        int land_water = INT_MAX;
        int water_land = INT_MAX;

        // Earliest land finish
        for(int i = 0; i < n; i++){
            land = min(land, landStartTime[i] + landDuration[i]);
        }

        // Water after land
        for(int i = 0; i < m; i++){
            water = min(water, waterStartTime[i] + waterDuration[i]);
            land_water = min(land_water, max(waterStartTime[i], land) + waterDuration[i]);
        }

        // Land after water
        for(int i = 0; i < n; i++){
            water_land = min(water_land, max(landStartTime[i], water) + landDuration[i]);
        }

        return min(water_land, land_water);
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 02/06/26.
//
