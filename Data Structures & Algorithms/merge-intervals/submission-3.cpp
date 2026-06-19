class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        for(auto it:intervals){
            int s=it[0];
            int e=it[1];
            int laste=ans.back()[1];
            //    int se=ans.back()[0];
            if(s<=laste){
                // ans.back()[0]=min(se,s);
                ans.back()[1]=max(laste,e);
            }
            else
            ans.push_back({s,e});
        }
        return ans;
    }
};
