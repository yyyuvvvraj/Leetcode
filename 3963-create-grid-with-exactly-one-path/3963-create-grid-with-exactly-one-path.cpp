class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> g(m, string(n, '#'));
        int r = 0, c = 0;
        bool right = true;
        g[0][0] = '.';

        while(r < m - 1 || c < n - 1){
            if((right && c < n - 1) || r == m - 1) c++;
            else r++;
            right = !right;
            g[r][c] = '.';
        }
        return g;
    }
};