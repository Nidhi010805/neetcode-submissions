// class Solution {
// public:
// int f(int i,vector<int>&dp){
//       if (i == 1) return 1;
//         if (i == 2) return 2;
//    if( dp[i]!=-1) return dp[i];
//  return  dp[i]=f(i-1,dp)+f(i-2,dp);
// }
//     int climbStairs(int n) {
//         vector<int>dp(n+1,-1);
//         return f(n,dp);
//     }
// };




// class Solution {
// public:

//     int climbStairs(int n) {
//          if(n==1) return 1;
//         vector<int>dp(n+1);
//          dp[1]= 1;
//          dp[2] =2;
//          for(int i=3;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//          }
//         return dp[n];
//     }
// };



class Solution {
public:

    int climbStairs(int n) {
         if(n<=2) return n;
        int prev2=1;
        int prev1=2;
        for(int i=3;i<=n;i++){
            int curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};
