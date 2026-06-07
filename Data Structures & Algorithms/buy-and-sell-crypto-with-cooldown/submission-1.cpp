// class Solution {
// public:
//     int maxProfit(vector<int>& price) {
//         int n=price.size();
//         int profit;
//         vector<long long >fut(2,0),fut1(2,0),curr(2,0);
//         fut[0]=0;
//         fut[1]=0;
//         for(int i=n-1;i>=0;i--){
//             for(int sell=0;sell<=1;sell++){
//                 if(sell==0){
//              profit=max(0+fut[0],-price[i]+fut[1]);
//                 }
//                 if(sell==1){
//                 profit=max(0+fut[1],price[i]+fut1[0]);
//                 }
//                 curr[sell]=profit;
//             }
//             fut1=fut;
//             fut=curr;

//         }
//         return curr[0];
//     }
// };




class Solution {
public:

long long helper(int ind,int n,int buy,vector<int>&arr,vector<vector<long long>>&dp){
    if(ind>=n) return 0;
    if(dp[ind][buy]!=-1) return dp[ind][buy];
    long long profit=0;
    if(buy==0){
        profit=max(0+helper(ind+1,n,0,arr,dp),-arr[ind]+helper(ind+1,n,1,arr,dp));
    }
    if(buy==1){
        profit=max(0+helper(ind+1,n,1,arr,dp),arr[ind]+helper(ind+2,n,0,arr,dp));
    }
    return dp[ind][buy]=profit;
}
    int maxProfit(vector<int>& price) {
        int n=price.size();
        
        vector<vector<long long >>dp(n,vector<long long>(2,-1));
        
        int profit= helper(0,n,0,price,dp);
        return (int)profit;
    }
};

