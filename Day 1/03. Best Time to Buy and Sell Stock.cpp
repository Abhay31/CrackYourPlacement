class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        for(int i = 1;i<prices.size();i++)
        {
            int diff = prices[i] - buy;
            profit = max(diff,profit);
            buy = min(buy,prices[i]);
        }
        return profit;
    }
};