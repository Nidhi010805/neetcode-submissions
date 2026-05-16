// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int>ans;
//     int n=nums.size();
    
//     for(int i=0;i<n;i++){
//         int sum=1;
//         for(int j=0;j<n;j++){
//             if(j==i) continue;
//           else
//           sum=sum*nums[j];
//         }
//         ans.push_back(sum);
//     }
//     return ans;

//     }
// };

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
    vector<int>prefix(n,1),suffix(n,1);
    vector<int>ans(n);
    
    for(int i=1;i<n;i++){
       prefix[i]=nums[i-1]*prefix[i-1]; 
   
    }
    for(int i=n-2;i>=0;i--){
       suffix[i]=nums[i+1]*suffix[i+1]; 
   
    }
    for(int i=0;i<n;i++){
   ans[i]=prefix[i]*suffix[i];
    }
    return ans;

    }
};
