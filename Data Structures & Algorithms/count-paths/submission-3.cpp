// class Solution {
// public:

// int f(int i,int j,int m,int n,vector<vector<int>>&dp){
//     if(i>=m || j>=n)
//     return 0;
//     if(i==m-1 && j==n-1 ) return 1;
//     if(dp[i][j]!=-1) return dp[i][j];
//     return  dp[i][j]=f(i+1,j,m,n,dp)+f(i,j+1,m,n,dp);
// }
//     int uniquePaths(int m, int n) {
//         int i=0,j=0;
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return f(0,0,m,n,dp);
//     }
// };




// class Solution {
// public:
//  int uniquePaths(int m, int n) {
//  vector<vector<int>>dp(m+1,vector<int>(n+1,0));
//         dp[m-1][n-1]=1;
//         for(int i=m-1;i>=0;i--){
//             for(int j=n-1;j>=0;j--){
//            dp[i][j]+=+dp[i+1][j]+dp[i][j+1];
//             }
//         }
//         return dp[0][0];
//     }
// };



class Solution {
public:
 int uniquePaths(int m, int n) {
 vector<int>prev(n,0),curr(n,0);
        prev[n-1]=1;
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i==m-1 && j==n-1){
                curr[j]=1;
                continue;
                }
                int down=prev[j];
                int right=(j+1<n)?curr[j+1]:0;
           curr[j]=down+right;
            }
            prev=curr;
        }
        return prev[0];
    }
};