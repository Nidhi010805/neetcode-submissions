class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       int n=hand.size();
       if(n% groupSize!=0)  return false;
       unordered_map<int,int>mpp;
       for(auto it:hand)
       mpp[it]++;
       for(auto it:hand){
        int s=it;
        while(mpp[s-1]>0) s--;
        while(s<=it){
         while(mpp[s]>0){
for(int i=s;i<s+groupSize;i++){
    if(mpp[i]==0) return false;
    mpp[i]--;
}
       }
       s++;
        }
       }
       return true;
    }
};
