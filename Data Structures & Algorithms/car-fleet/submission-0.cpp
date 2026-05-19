class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       int n=position.size();
       vector<pair<int ,int>>dis;
       for(int i=0;i<n;i++){
        dis.push_back({ position[i],speed[i]});
       }
       sort(dis.rbegin(),dis.rend());
       vector<double>st;
       for(int i=0;i<dis.size();i++){
        double time=(double)(target-dis[i].first)/dis[i].second;
        st.push_back(time);
        if(st.size()>=2 && st.back()<=st[st.size()-2]){
            st.pop_back();
        }
       }
       return st.size();
;
    }
};
