class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices[0];
        int maxi=0;
        int profit=0;

        for(int i=1;i<prices.size();i++){
            if(prices[i]<a){
                a=prices[i];
            }
            else{
                profit=prices[i]-a;
                maxi=max(profit,maxi);
            }
        }
        return maxi;
    }
};