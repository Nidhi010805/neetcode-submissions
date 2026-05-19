class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int n=piles.size();
       int k=1;
       while(true){
        long long time=0;
        for(int p:piles){
            time+=(p+k-1)/k;
        }
        
        if(time<=h)
        return k;
       
       k++;
       }
       return k;

    }
};
