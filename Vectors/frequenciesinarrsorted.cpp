#include <iostream>
#include <vector>
using namespace std;

void checkOccurence(vector<int> arr)
{
	int n = arr.size();
	int count = 1;
	int i = 0;
	for (int j = 1; j < n; j++)
	{

		if (arr[i] == arr[j])
		{
			count++;
		}
		else if (arr[i] != arr[j])
		{
			cout << arr[i] << " has occurence " << count << endl;
			count = 1;
			i = j;
		}
	}
	cout << arr[i] << " has occurrence " << count << endl;
}

int main()
{
	vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
	checkOccurence(arr);
	return 0;
}