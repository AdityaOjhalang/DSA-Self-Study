#include <iostream>
#include <vector>
using namespace std;

int trappingRain_naive(vector<int> arr)
{
	int n = arr.size();
	int storedWater = 0;
	for (int i = 1; i < (n - 1); i++)
	{
		int lmax = arr[i];
		for (int j = 0; j < i; j++)
		{
			lmax = max(arr[j], lmax);
		}
		int rmax = arr[i];
		for (int j = i + 1; j < n; j++)
		{
			rmax = max(arr[j], rmax);
		}
		storedWater = storedWater + (min(lmax, rmax) - arr[i]);
	}
	cout<< storedWater << endl;
}
int trappingRain_efficient(vector<int> arr)
{
}
int main()
{
	vector<int> arr = {3, 0, 1, 2, 5};
	trappingRain_naive(arr);
	//cout << "Efficient :" << trappingRain_efficient(arr) << endl;

	return 0;
}