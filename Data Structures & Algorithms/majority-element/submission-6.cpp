// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         // int count=n/2;
//         unordered_map<int,int>mpp;
//         for(int i=0;i<nums.size();i++){
//             mpp[nums[i]]++;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(mpp[nums[i]]>nums.size()/2)
//             return nums[i];
//         }
//         return 0;
//     }
// };



class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n=nums.size();
     int candidate=-1;   
     int count=0;
        
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                candidate=nums[i];
            }
            else if(nums[i]==candidate){
                count++;
            }
            else
            count--;
        }
         count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==candidate)
            count++;
        }
        if(count>n/2) return candidate;
        return -1;
    }
};