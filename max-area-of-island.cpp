class Solution {
private:
    int AreaOfIsland = 0;

    int irow[4] = {1, -1, 0, 0};
    int jcolumn[4] = {0, 0, 1, -1};

    bool inboundry(int i, int n, int j, int m) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    void dfs(vector<vector<int>>& grid, vector<vector<int>>& visited, int i,
             int n, int j, int m) {
        if (!inboundry(i, n, j, m) || visited[i][j] || grid[i][j] == 0)
            return;

        AreaOfIsland++;
        visited[i][j] = 1;

        for (int k = 0; k < 4; k++) {
            int new_i = i + irow[k];
            int new_j = j + jcolumn[k];
            dfs(grid,visited,new_i,n,new_j,m);
        }

        /*dfs(grid, visited, i, n, j + 1, m);
        dfs(grid, visited, i, n, j - 1, m);
        dfs(grid, visited, i + 1, n, j, m);
        dfs(grid, visited, i - 1, n, j, m);*/
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxmAreaOfIsland = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && grid[i][j] == 1) {
                    AreaOfIsland = 0;
                    dfs(grid, visited, i, n, j, m);
                    maxmAreaOfIsland = max(maxmAreaOfIsland, AreaOfIsland);
                }
            }
        }
        return maxmAreaOfIsland;
    }
};
