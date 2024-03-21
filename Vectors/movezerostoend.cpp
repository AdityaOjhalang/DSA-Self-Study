#include <iostream>
#include <vector>
using namespace std;

// Function to naively move zeros to the end of the array
void moveZerosToEndNaive(vector<int> &arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		if (arr[i] == 0)
		{
			for (size_t j = i + 1; j < arr.size(); j++)
			{
				if (arr[j] != 0)
				{ // Ensure we swap with a non-zero element
					swap(arr[i], arr[j]);
					break; // Break after swapping to move to the next element
				}
			}
		}
	}
}
void moveZerosEfficient(vector<int> &arr)
{
	int count = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != 0)
		{
			swap(arr[i],arr[count]);
			count++;
		}
	}
}
int main()
{
	vector<int> arr = {1, 0, 3, 0, 5};

	moveZerosToEndNaive(arr);

	for (int num : arr)
	{
		cout << num << " ";
	}

	return 0;
}
