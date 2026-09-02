class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit=0,bestbuy=prices[0];
        for(int i=1;i<prices.size();i++){
        	if(prices[i]>bestbuy){
                profit=max(profit,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]); 
		}
        return profit;
    }
};