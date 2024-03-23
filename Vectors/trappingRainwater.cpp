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
	cout << storedWater << endl;
}
int trappingRain_better(vector<int> arr)
{
	int res = 0;
	int n = arr.size();

	vector<int> lmax(n);
	vector<int> rmax(n);
	lmax[0] = arr[0];
	rmax[n - 1] = arr[n - 1];
	for (int i = 1; i < n; i++)
	{
		lmax[i] = max(lmax[i - 1], arr[i]);
	}

	for (int i = n - 2; i >= 0; i--)
	{
		rmax[i] = max(rmax[i + 1], arr[i]);
	}

	for (int i = 1; i < n - 1; i++)
	{
		res += min(lmax[i], rmax[i]) - arr[i];
	}

	cout << " ans through efficient solution is " << res;
}
int trapping_rain_twopointer(vector<int> arr)
{
	int n = arr.size();
	if (arr.empty())
		return 0;

	int lmax = arr[0];
	int rmax = arr[n - 1];
	int l = 0;
	int r = n - 1;
	int waterTrapped = 0;
	while (l < r)
	{
		if (lmax > rmax)
		{
			l++;
			lmax = max(arr[l], lmax);
			waterTrapped += lmax - arr[l];
		}
		else
		{
			r--;
			rmax = max(arr[r], rmax);
			waterTrapped += rmax - arr[r];
		}
	}
	cout << waterTrapped << endl;
	return waterTrapped;
}
int main()
{
	vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}; // Example input
	cout << "Water trapped: " << trapping_rain_twopointer(arr) << endl;
	return 0;
}