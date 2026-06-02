class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int lcs=0;
        unordered_set<int>mpp(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(!mpp.count(nums[i]-1)){
      int currenrnum=nums[i];
      int strike=1;
      while(mpp.count(currenrnum+1)){
        currenrnum+=1;
        strike+=1;
      }
      lcs=max(lcs,strike);
            }
            
            
        }
        return lcs;
    }
};
