// Tip -: Check for current day if we are in profit from previours day or not .

int stockBuyAndSell(int n, vector<int> &price) {
        int profit=0;
        
        for(int i=1 ; i<n ;i++)
        {
            if(price[i] > price[i-1])
            profit += price[i]-price[i-1];
        }
        return profit;
        
    }