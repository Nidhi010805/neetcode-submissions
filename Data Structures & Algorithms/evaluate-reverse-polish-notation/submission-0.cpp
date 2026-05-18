class Solution {
public:
    int evalRPN(vector<string>& s) {
        int n=s.size();
        stack<int>st;
       for(int i=0;i<n;i++){
      
      

      
        if(s[i]=="+"||s[i]=="-"||s[i]=="/"||s[i]=="*") {
        int one=st.top();
        st.pop();
        int two=st.top();
        st.pop();
        if(s[i]=="+")
        st.push(one+two);
        else if(s[i]=="-")
        st.push(two-one);
        else if(s[i]=="*")
        st.push(one*two);
    else
        st.push(two/one);

        }
        else
          st.push(stoi(s[i]));
      
       }
      
      
return st.top();      
    }
};
