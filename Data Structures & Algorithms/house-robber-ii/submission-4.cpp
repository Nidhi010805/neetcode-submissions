// class Solution {
// public:

// int robbary(vector<int>& nums,int s,int e){
//   if(s==e) return nums[s];
//   int n=e-s+1;
  
//   vector<int>dp(n);
//   dp[0]=nums[s];
//   dp[1]=max(nums[s],nums[s+1]);
//   for(int i=2;i<n;i++){
//     dp[i]=max(dp[i-2]+nums[s+i],dp[i-1]);
//   }
//   return dp[n-1];
// }
//     int rob(vector<int>& nums) {
//       int n=nums.size();
//       if(n==1) return nums[0];
//       int case1=robbary(nums,0,n-2);
//       int case2=robbary(nums,1,n-1);
//        return max(case1,case2);
//     }
// };





class Solution {
public:

int robbary(vector<int>& nums,int s,int e){
  if(s==e) return nums[s];
  int n=e-s+1;
  int prev2=0;
  int prev1=0;
  for(int i=s;i<=e;i++){
    int curr=max(prev2+nums[i],prev1);
    prev2=prev1;
    prev1=curr;
  }
  return prev1;
}
    int rob(vector<int>& nums) {
      int n=nums.size();
      if(n==1) return nums[0];
      int case1=robbary(nums,0,n-2);
      int case2=robbary(nums,1,n-1);
       return max(case1,case2);
    }
};
