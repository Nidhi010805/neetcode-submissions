// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//       if(s.size()!=t.size()) return false;
//         int count[256]={0};
//         for(int i=0;i<=s.size();i++){
//             count[s[i]]++;
//             count[t[i]]--;
//         }
//         for(int i=0;i<256;i++){
//        if(count[i]!=0) return false;
//         }
//         return true;
//     }
// };


// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//       sort(s.begin(),s.end());
//       sort(t.begin(),t.end());
//       if(s==t) return true;
//       else
//       return false;
//     }
// };
class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int>mpp;
      for(int i=0;i<=s.size();i++){
     mpp[s[i]]++;
     mpp[t[i]]--;
      }
      
      for(int i=0;i<=s.size();i++){
       if(mpp[s[i]]!=0)
       return false;
      }
      return true;
    }
};
