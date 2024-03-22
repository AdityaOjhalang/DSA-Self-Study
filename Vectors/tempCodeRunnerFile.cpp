int maxProfit(vector<int>& prices) {
	int n = prices.size();
	int maxProfit = 0;
	int minPrice = prices[0]; // Initialize the minimum price to the first element
	
	for (int i = 1; i < n; i++) {
		int profit = prices[i] - minPrice;
		if (profit > maxProfit) {
			maxProfit = profit;
		}
		if (prices[i] < minPrice) {
			minPrice = prices[i];
		}
	}
	
	return maxProfit;
}