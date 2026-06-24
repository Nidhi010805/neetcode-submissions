class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size(),st=0,e=0;
        vector<int>freq(26);
        vector<int>ans;
        for(int i=0;i<n;i++){
            freq[s[i]-'a']=i;
        }
        int i=0;
        while(i<n){
     e=max(e,freq[s[i]-'a']);
     if(i==e){
     ans.push_back(e-st+1);
     st=e+1;
     }
     i++;

        }
        return ans;
        
    }
};
