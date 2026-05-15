class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        
        int s=0,e=n-1;
        while(s<e){
            if(num[s]+num[e]==target)
            return{s+1,e+1};
            else if(num[s]+num[e]>target)
            e--;
            else
            s++;
        }
        return {};
    }
};
