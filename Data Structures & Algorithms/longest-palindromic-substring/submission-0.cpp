class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;

        string t = s;
        reverse(t.begin(), t.end());
        
        int maxLen = 0;
        int endIndex = 0;
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    
                    // CRITICAL FIX: Check if the substring in s aligns perfectly with its reverse in t
                    // The original index in s corresponding to the end of the match in t must be verified.
                    if (dp[i][j] > maxLen) {
                        int original_index = n - j; // Where this substring starts in s from the back
                        if (original_index + dp[i][j] == i) { 
                            maxLen = dp[i][j];
                            endIndex = i;
                        }
                    }
                } else {
                    dp[i][j] = 0;
                }
            }
        }
        
        return s.substr(endIndex - maxLen, maxLen);
    }
};
