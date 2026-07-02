
@Red-g1f
5 hours ago
class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, -1));

        queue<pair<pair<int,int>,int>> q;

        int startHealth = health - grid[0][0];// 1-1  health start from 1 given

        if(startHealth == 0)
            return false;

        q.push({{0,0}, startHealth});
        visited[0][0] = startHealth;  // visited store  healhth of cell

        while(!q.empty())
        {
            int i = q.front().first.first;
            int j = q.front().first.second;

            int parent_health = q.front().second;

            q.pop();

            if(i == n-1 && j == m-1)
                return true;

            // left
            if(j > 0)
            {
                int newHealth = parent_health - grid[i][j-1];

                if(newHealth > 0 && newHealth > visited[i][j-1]) // a cell cn be re visited if it get better   newHealth
                {
                    visited[i][j-1] = newHealth;
                    q.push({{i,j-1}, newHealth});
                }
            }

            // top
            if(i > 0)
            {
                int newHealth = parent_health - grid[i-1][j];

                if(newHealth > 0 && newHealth > visited[i-1][j])
                {
                    visited[i-1][j] = newHealth;
                    q.push({{i-1,j}, newHealth});
                }
            }

            // right
            if(j < m-1)
            {
                int newHealth = parent_health - grid[i][j+1];

                if(newHealth > 0 && newHealth > visited[i][j+1])
                {
                    visited[i][j+1] = newHealth;
                    q.push({{i,j+1}, newHealth});
                }
            }

            // bottom
            if(i < n-1)
            {
                int newHealth = parent_health - grid[i+1][j];

                if(newHealth > 0 && newHealth > visited[i+1][j])
                {
                    visited[i+1][j] = newHealth;
                    q.push({{i+1,j}, newHealth});
                }
            }
        }

        return false;
    }
};

//
// Created by Yuvraj Rajni Sachin Deshmukh on 02/07/26.
//
