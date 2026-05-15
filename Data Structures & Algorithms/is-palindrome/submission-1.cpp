class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int st=0;
        int e=n-1;
        while(st<e){
            if(!isalnum(s[st]))
            st++;
          else if(!isalnum(s[e]))
            e--;
            else{
            if (tolower(s[st]) != tolower(s[e])) {
                    return false; // Found a mismatch
                }
                st++;
                e--;
            }
        }
        return true;;
    }
};
