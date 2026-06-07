class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n=price.size();
        int profit;
        vector<long long >fut(2,0),fut1(2,0),curr(2,0);
        fut[0]=0;
        fut[1]=0;
        for(int i=n-1;i>=0;i--){
            for(int sell=0;sell<=1;sell++){
                if(sell==0){
profit=max(0+fut[0],-price[i]+fut[1]);
                }
                if(sell==1){
                    profit=max(0+fut[1],price[i]+fut1[0]);
                }
                curr[sell]=profit;
            }
            fut1=fut;
            fut=curr;

        }
        return curr[0];
    }
};
