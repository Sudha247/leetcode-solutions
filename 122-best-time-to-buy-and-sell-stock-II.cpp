class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 1, L = prices.size(); i < L; ++i) {
            profit += max(0, prices[i] - prices[i-1]);
        }
        return profit;
        /*int maxi = 0;
        for(int i = 0; i < (prices.size()-1); i++){
            maxi += max(0, (prices[i+1] - prices[i])); 
        }
        
        return maxi;*/
    }
};
