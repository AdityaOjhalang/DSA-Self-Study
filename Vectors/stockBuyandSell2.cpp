#include <iostream>
#include <vector>
using namespace std;


int efficient(vector<int> prices)
{
	int profits = 0;
	for (int i = 1; i < prices.size(); i++)
	{
		if (prices[i] > prices[i - 1])
		{
			profits = profits + prices[i] - prices[i - 1];
		}
	}
	return profits;
}
int main()
{
	// Test the maxProfit function
	vector<int> prices = {1, 5, 3, 8, 12};
	int result = efficient(prices);
	cout << "Max Profit: " << result << endl;

	return 0;
}