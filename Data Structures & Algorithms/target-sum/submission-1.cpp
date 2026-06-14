class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        if((sum + target) % 2 != 0) return 0;
        if(target>sum) return 0;
        if(sum + target < 0) return 0;
        int newtarget=(sum+target)/2;
        int k=newtarget;
        vector<int>dp(k+1,0);
        dp[0]=1;
        for(int i=0;i<nums.size();i++){
            for(int j=k;j>=nums[i];j--){
                dp[j]+=dp[j-nums[i]];

            }
        }
        return dp[k];
    }
};