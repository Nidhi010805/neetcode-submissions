// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int n=nums1.size(),m=nums2.size();
       
//        vector<int>ans;
//        int i=0,j=0;
//        while(i<n && j<m){
//         if(nums1[i]<=nums2[j]){
//             ans.push_back(nums1[i]);
//             i++;
//         }
//         else if(nums1[i]>nums2[j]){
//               ans.push_back(nums2[j]);
//               j++;
//         }
//        }
//        while(i<n){
//        ans.push_back(nums1[i]);
//             i++;
//        }
//        while(j<m){
//        ans.push_back(nums2[j]);
//             j++;
//        } 
//        int k=ans.size();
//        if(k%2!=0){
//         return ans[k/2];
//        }
//        else{
//         int l=k/2;
//         return double ((ans[l-1]+ans[l])/2.0);
//        }  
//     }
// };



class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size(),n2=nums2.size();
       if(n1>n2)
       return findMedianSortedArrays(nums2,nums1);
       int leftsize=(n1+n2+1)/2;
       int s=0,e=n1;
       while(s<=e){
        int cut1=s+(e-s)/2;
        int cut2=leftsize-cut1;
        int l1=(cut1==0)?INT_MIN:nums1[cut1-1];
        int l2=(cut2==0)?INT_MIN:nums2[cut2-1];
       int r1=(cut1==n1)?INT_MAX:nums1[cut1];
        int r2=(cut2==n2)?INT_MAX:nums2[cut2];
        if(l1<=r2 && l2<=r1){
            if((n1+n2)%2==1){
                return max(l1,l2);
            }
            else{
               return( max(l1,l2)+min(r1,r2))/2.0;
            }
        }
if(l1>l2){
    e=cut1-1;
}
else
s=cut1+1;

       }
       return 0.0;
        
    }
};

