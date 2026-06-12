class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
     int s=0,r=n-1;
     int lmax=0,rmax=0;
     int total=0;
     while(s<r){
     if(height[s]<height[r ]){
        if(lmax>=height[s] ){
        total+=lmax-height[s];
     }
     else{
     lmax=height[s];
     }
     s++;
     
     }
     else{
        if(rmax>=height[r]){
            total+=rmax-height[r];
        }
        else{
            rmax=height[r];
        }
            r--;
        

     }
     }
     return total;
    }
};