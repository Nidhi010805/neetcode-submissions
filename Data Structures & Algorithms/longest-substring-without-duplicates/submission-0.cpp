class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.size();
       int left=0,maxlen=0;
       unordered_map<char,int>mp;
      for(int right=0;right<n;right++){
        char ch=s[right];
        mp[ch]=mp[ch]+1;
        while(mp[ch]>1){
            mp[s[left]]=mp[s[left]]-1;
            left++;

        }
        
            
        
        
        maxlen=max(maxlen,right-left+1);
      } 
      return maxlen; 
    }
};
