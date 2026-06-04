class Solution {
public:
bool solve(string &st,int s,int e){
    while(s<=e){
   if( st[s]!=st[e])
   return false;
   else{
   s++;
   e--;
   }
    }
    return true;
}
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(solve(s,i,j))
                count++;

            }
        }
        return count+n;
    }
};
