class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),curr=0,maxpos=0,jump=0;
        for(int i=0;i<n-1;i++){
            maxpos=max(maxpos,i+nums[i]);
            if(i==curr){
                jump++;
                curr=maxpos;
                if(curr==n-1)
                break;
            }
        }
        return jump;
    }
};
