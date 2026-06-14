class Solution {
public:
    int dfs(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>& dp, int n, int m) {
        if (dp[i][j] != 0) return dp[i][j];

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        int max_len = 1; 

        for (int d = 0; d < 4; d++) {
            int nx = i + dx[d];
            int ny = j + dy[d];
 if (nx >= 0 && nx < n && ny >= 0 && ny < m && matrix[nx][ny] > matrix[i][j]) {
                max_len = max(max_len, 1 + dfs(nx, ny, matrix, dp, n, m));
            }
        }
        return dp[i][j] = max_len;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();
        
       
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int max_path = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                max_path = max(max_path, dfs(i, j, matrix, dp, n, m));
            }
        }

        return max_path;
    }
};
