class Solution {
public:
    bool canJump(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(i>s)return false;
            s=max(s,i+nums[i]);
        }
        return true;
    }
};
