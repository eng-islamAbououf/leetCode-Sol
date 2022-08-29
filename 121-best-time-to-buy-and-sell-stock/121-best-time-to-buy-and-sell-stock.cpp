class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int ret = 0 , bu = prices[0];
        int n = (int) prices.size() ;
        for (int i = 1; i <n ; ++i) {
            if(prices[i] < bu)
                bu = prices[i] ;
            else ret = max(ret , prices[i]-bu);
        }
        return ret ;
    }
};