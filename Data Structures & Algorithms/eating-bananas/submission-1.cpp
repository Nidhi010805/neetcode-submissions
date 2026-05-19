// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//        int n=piles.size();
//        int k=1;
//        while(true){
//         long long time=0;
//         for(int p:piles){
//             time+=(p+k-1)/k;
//         }
        
//         if(time<=h)
//         return k;
       
//        k++;
//        }
//        return k;

//     }
// };



class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int n=piles.size();
       int s=1,e=*max_element(piles.begin(),piles.end());
       int res=e;
       while(s<=e){
     int mid=s+(e-s)/2;
     long long  time=0;
     for(int p:piles){
        time+=(p+mid-1)/mid;
     }
     if(time<=h){
        res=mid;
        e=mid-1;
     }
     else{
        s=mid+1;
     }
       }
       return res;

    }
};

