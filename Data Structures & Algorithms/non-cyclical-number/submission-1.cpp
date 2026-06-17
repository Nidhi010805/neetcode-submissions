class Solution {
public:
int sumdigit(int n){
    int sum=0;
    while(n){
  int digit=n%10;
  sum+=(digit*digit);
  n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
        int slow=n;
       int fast=sumdigit(n);
       while(fast!=1 && fast!=slow){
        slow=sumdigit(slow);
        fast=sumdigit(sumdigit(fast));
       }
       if(fast==1)
       return true; 
       else
       return false;
    }
};
