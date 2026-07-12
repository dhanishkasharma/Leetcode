class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        // 1. Create a dp table initialized to INT_MAX
        vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
        
        // 2. Base Case: start at the top-left corner
        dp[0][0] = grid[0][0];
        
        // 3. Loop through the grid and look ahead (i+1, j+1)
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // If the current cell is unreachable, skip it
                if (dp[i][j] == INT_MAX) continue;
                
                // Look Down: Check if i+1 is within grid boundaries
                if (i + 1 < m) {
                    dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + grid[i + 1][j]);
                }
                
                // Look Right: Check if j+1 is within grid boundaries
                if (j + 1 < n) {
                    dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + grid[i][j + 1]);
                }
            }
        }
        
        // The answer will accumulate perfectly at the bottom-right corner
        return dp[m - 1][n - 1];
    }
};