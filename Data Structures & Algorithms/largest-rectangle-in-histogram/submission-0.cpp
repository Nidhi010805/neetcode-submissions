class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
       int n= h.size();
       stack<int>st;
       int maxarea=0;
       for(int i=0;i<=n;i++){
        int curh;
        if(i==n) curh=0;
        else
        curh=h[i];
        while(!st.empty() && curh<h[st.top()]){
            int l=h[st.top()];
            st.pop();

            int b;
            if(st.empty())
            b=i;
            else
            b=i-st.top()-1;
            int area=l*b;
            maxarea=max(maxarea,area);
        }
        st.push(i);

       }
       return maxarea;
    }
};
