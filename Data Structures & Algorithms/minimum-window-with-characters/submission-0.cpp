class Solution {
public:
    string minWindow(string s, string t) {
        int n1=s.size(),n2=t.size();
        if(n1<n2) return "";
        vector<int>freq(128,0);
        for(int i=0;i<n2;i++){
            freq[t[i]]++;
        }
        int needed=n2;
        int start=0,l=0,r=0,mini=INT_MAX;
        while(r<n1){
            if(freq[s[r]]>0){
                needed--;
            }
            freq[s[r]]--;
            r++;
            while(needed==0){
                if((r-l)<mini){
                  mini=(r-l);
                  start=l;  
                }
                freq[s[l]]++;
                if (freq[s[l]] > 0) {
                    needed++;
                }

                l++;
            }

        }
  if(mini==INT_MAX) return "";
  else
  return s.substr(start,mini);
        
    }
};
