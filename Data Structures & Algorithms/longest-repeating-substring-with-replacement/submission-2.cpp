class Solution {
public:
    int characterReplacement(string s, int k) {
       unordered_map<char,int>count; 
       int left=0,res=0,maxvalue=0;
       for(int r=0;r<s.size();r++){
        count[s[r]]++;
        maxvalue=max(maxvalue,count[s[r]]);
        while((r-left+1)-maxvalue>k){
            count[s[left]]--;
            left++;
        }
        res=max(res,r-left+1);


       }
       return res;
    }
};
