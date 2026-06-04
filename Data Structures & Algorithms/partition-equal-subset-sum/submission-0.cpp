class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=arr[i];
        }
        if(totalsum%2!=0)
        return false;
        else{
          int  k=totalsum/2;
            vector<bool>prev(k+1,0);
            vector<bool>curr(k+1,0);
            prev[0]=true;
            if(arr[0] <= k)
    prev[arr[0]] = true;
           curr[0] = true;
           for(int ind=1;ind<n;ind++){
            for(int target=1;target<=k;target++){
                bool nottake=prev[target];
                int take=false;
                if(arr[ind]<=target){
                    take=prev[target-arr[ind]];
                }
                curr[target]=take||nottake;
            }
            prev=curr;
           }
           return prev[k];
            
        }
    }
};