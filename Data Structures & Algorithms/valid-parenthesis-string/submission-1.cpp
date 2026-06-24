// class Solution {
// public:
//     bool checkValidString(string s) {
//         stack<int>st,sr;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='(')
//             st.push(i);
//             else if(s[i]=='*')
//             sr.push(i);
//             else{
//                 if(st.empty() && sr.empty()) return false;
//                 if(!st.empty())
//                 st.pop();
//                 else
//                 sr.pop();
            
//             }
//             }
//             while(!st.empty() && !sr.empty()){
//                 if(st.top()>sr.top())
//                 return false;
//                 st.pop();
//                 sr.pop();
            
//         }
//         return st.empty();
//     }
// };





class Solution {
public:
    bool checkValidString(string s) {
        int l=0,h=0;
        for(auto it:s){
            if(it=='(')
            l++;
            else
            l+=-1;
            if(it!=')')
            h++;
            else
            h+=-1;
            if(h<0) return false;
            if (l < 0) l = 0;
        }
        return l==0;
        
    }
};

