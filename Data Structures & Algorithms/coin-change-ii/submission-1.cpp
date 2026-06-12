// class Solution {
// public:

// long helper(vector<int>& coins,int ind,int t,vector<vector<long>>&dp){
//   if(ind==0){
//     return (t%coins[0]==0);
//   }  
//   if(dp[ind][t]!=-1)
//   return dp[ind][t];

// long ntake=helper(coins,ind-1,t,dp);
// long take=0;
// if(coins[ind]<=t){
//  take=helper(coins,ind,t-coins[ind],dp);
// }
// return dp[ind][t]=take+ntake;

// }
//     int change(int amount, vector<int>& coins) {
//         int ind=coins.size();
//         vector<vector<long>>dp(ind,vector<long>(amount+1,-1));
//         return helper(coins,ind-1,amount,dp);
//     }
// };






class Solution {
public:


 
    int change(int amount, vector<int>& coins) {
        int ind=coins.size();
        vector<vector<long>>dp(ind,vector<long>(amount+1,0));
        for(int i=0;i<=amount;i++){
            if(i%coins[0]==0)
            dp[0][i]=1;
        }

        for(int i=1;i<ind;i++){
            for(int t=0;t<=amount;t++){
                long ntake=dp[i-1][t];
                long take=0;
                if(coins[i]<=t)
                 take=dp[i][t-coins[i]];
            dp[i][t]=take+ntake;

            }
        }
        return dp[ind-1][amount];
    }
};

