class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int maxProfit = 0;
        while(sell < prices.size()){
            int diff = prices[sell] - prices[buy];
            if(diff > maxProfit){
                maxProfit = diff;
                sell++;
            }
            else if(diff < 0){
                buy = sell;
                sell++;
            }
            else{
                sell++;
            }
        }
        return maxProfit;
    }
};
