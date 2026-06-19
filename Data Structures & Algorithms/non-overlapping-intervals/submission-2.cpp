class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       int count=0;
       sort(intervals.begin(), intervals.end());
       int pre=intervals[0][1];
       for(int i=1;i<intervals.size();i++){
      int s=intervals[i][0];
      int e=intervals[i][1];
      if(s>=pre)
      pre=e;
      else{
      count++;
      pre=min(e,pre);
      }
       }
       return count;
    }
};
