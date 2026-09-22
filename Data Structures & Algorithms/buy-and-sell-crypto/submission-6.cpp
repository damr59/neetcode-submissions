class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int n=prices.size();
        int minp=prices[0];
        for(int i=0;i<n;i++)
        {
            minp=min(minp,prices[i]);
            int profit=prices[i]-minp;
            maxi=max(maxi,profit);
            
        }
        return maxi;
        
    }
};
