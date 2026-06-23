class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st,sr;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            st.push(i);
            else if(s[i]=='*')
            sr.push(i);
            else{
                if(st.empty() && sr.empty()) return false;
                if(!st.empty())
                st.pop();
                else
                sr.pop();
            
            }
            }
            while(!st.empty() && !sr.empty()){
                if(st.top()>sr.top())
                return false;
                st.pop();
                sr.pop();
            
        }
        return st.empty();
    }
};
