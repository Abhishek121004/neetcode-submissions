class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minimum = prices[0];
        int profit = 0, maxProfit = 0;

        for(int i=0; i<=n-1; i++) {
            profit = prices[i] - minimum;
            maxProfit = max(profit, maxProfit);
            minimum = min(minimum, prices[i]);
        }
        return maxProfit;
    }
};
