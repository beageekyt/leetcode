class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,profit=0,n;
        n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<min)
            min=prices[i];
            profit=max(profit,prices[i]-min);
        }
        return profit;
    }
};