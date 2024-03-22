#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &arr)
{
	int temp = arr[0];
	for (int i = 1; i < arr.size(); i++)
	{
		arr[i - 1] = arr[i];
	}
	int n = arr.size();
	arr[n - 1] = temp;
}
void leftRotate_naive(vector<int> &arr, int d)
{
	for (int i = 0; i < d; i++)
	{
		rotate(arr);
	}
}
void leftRotate_better(vector<int> &arr, int d)
{
	int n = arr.size();
	vector<int> temp(d);
	for (int i = 0; i < d; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = d; i < n; i++)
	{
		arr[i - d] = arr[i];
	}
	for (int i = 0; i < d; i++)
	{
		arr[n - d + i] = temp[i];
	}
}
void reverse(vector<int> &arr, int low, int high)
{
	while (low < high)
	{
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}
void leftRotate_best(vector<int> &arr, int d)
{
	int n = arr.size();
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}
int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};
	int d = 2;

	cout << "Original Array: ";
	for (int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	cout << "Left Rotate Naive: ";
	leftRotate_naive(arr, d);
	for (int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	arr = {1, 2, 3, 4, 5}; // Reset the array

	cout << "Left Rotate Better: ";
	leftRotate_better(arr, d);
	for (int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	arr = {1, 2, 3, 4, 5}; // Reset the array

	cout << "Left Rotate Best: ";
	leftRotate_best(arr, d);
	for (int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	return 0;
}