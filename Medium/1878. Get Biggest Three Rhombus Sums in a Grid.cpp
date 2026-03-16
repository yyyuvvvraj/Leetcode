class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        set<int, greater<int>> st;

        for(int r = 0; r < m; r++){
            for(int c = 0; c < n; c++){
                //Area 0 rhombus
                st.insert(grid[r][c]);
                int maxRadius = min({r, m - 1 - r, c, n - 1 - c});

                for(int k = 1; k <= maxRadius; k++){
                    int sum = 0;
                    int i = r - k;
                    int j = c;

                    //Top -> Right
                    for(int t = 0; t < k; t++){
                        sum += grid[i][j];
                        i++;
                        j++;
                    }

                    //Right -> Bottom
                    for(int t = 0; t < k; t++){
                        sum += grid[i][j];
                        i++;
                        j--;
                    }

                    //Bottom -> Left
                    for(int t = 0; t < k; t++){
                        sum += grid[i][j];
                        i--;
                        j--;
                    }

                    //Left -> Top
                    for(int t = 0; t < k; t++){
                        sum += grid[i][j];
                        i--;
                        j++;
                    }
                    st.insert(sum);
                }
            }
        }
        vector<int> ans;
        for(int x : st){
            ans.push_back(x);
            if(ans.size() == 3){
                break;
            }
        }
        return ans;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 16/03/26.
//