/*Problem Link
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int diff=0;
        int prev=prices[0];
        for(int i=1;i<prices.size();i++){
            int diff = prices[i]-prev;
            maxi = max(diff,maxi);
            if(prices[i]<prev) prev=prices[i];
        }
        return maxi;
    }  
};