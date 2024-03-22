#include <iostream>
#include <vector>
using namespace std;
/**
 * Calculates the maximum difference between any two elements in the given vector.
 * This function uses an efficient algorithm to find the maximum difference.
 * 
 * @param arr The vector of integers to find the maximum difference from.
 */
void maxidiff_efficient(vector<int> arr)
{

	int res = arr[1] - arr[0];
	int minval = arr[0];

	for (int i = 1; i < arr.size(); i++)
	{
		res = max(res, arr[i] - minval);
		minval = min(minval, arr[i]);
	}
	cout << res << endl;
	cout << minval << endl;
}
int main()
{
	vector<int> arr = {2, 5, 3, 9, 1}; 
	maxidiff_efficient(arr);

	return 0;
}