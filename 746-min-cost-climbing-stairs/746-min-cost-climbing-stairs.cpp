class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==2){
            return min(cost[0], cost[1]);
        }
        // 10 15 20
        vector<int> dp;
        dp.push_back(cost[0]);
        dp.push_back(cost[1]);
        // 10 15 
        for (int i=2; i<cost.size(); i++){
            dp.push_back(cost[i] + min(dp[i-1], dp[i-2]));
        }
        return min(dp.back(), dp[dp.size() - 2]);
    }
};