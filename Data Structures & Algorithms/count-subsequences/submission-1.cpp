class Solution {
public:
int helper(int i,int j,string s, string t,vector<vector<int>>&dp){
    if(j==t.size()) return 1;
    if(i==s.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=helper(i+1,j,s,t,dp);
    if(s[i]==t[j])
    ans+=helper(i+1,j+1,s,t,dp);
    dp[i][j]=ans;
    return ans;
}
    int numDistinct(string s, string t) {
        int n=s.size(),m=t.size();
        if(t.size()>s.size()) return 0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return helper(0,0,s,t,dp);
    }
};
