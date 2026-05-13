class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int mini=strs[0].length();
        string ans;
        for(string &str:strs){
        mini=min(mini,(int)str.size());
        }
        for(int i=0;i<mini;i++){
            char ch=strs[0][i];
        for(string &str:strs){
            if(str[i]!=ch)
            return ans;
        }
        ans.push_back(ch);
        }
        return ans;
    }
};