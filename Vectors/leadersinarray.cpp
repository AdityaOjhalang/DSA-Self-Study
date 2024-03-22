#include <iostream>
#include <vector>
using namespace std;

void LeadersEfficient(vector<int> arr)
{
	int n = arr.size();
	int curr_leader = arr[n - 1];
	cout<<curr_leader<<endl;
	for (int i = n - 2; i >= 0; i--)
	{
		if (arr[i] > curr_leader)
		{
			curr_leader = arr[i];
			cout<<arr[i]<<endl;
		}
	}
}
int main()
{
	vector<int> arr = {16, 17, 4, 3, 5, 2};
	cout << "Leaders in the array: " << endl;
	LeadersEfficient(arr);
}