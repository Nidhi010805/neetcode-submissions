// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         int n=nums.size();
//         unordered_set<int>freq;
//         for(int i=0;i<n;i++){
//             if(freq.find(nums[i])!=freq.end()){

//             return true;
//             }
//             freq.insert(nums[i]);
//         }
//         return false;
//     }
// };



class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        for(int i:nums){
           if( mpp[i]>1)
           return true;
        }
        return false;
    }
};