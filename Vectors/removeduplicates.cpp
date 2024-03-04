#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void removeDuplicates(vector<int> &nums)
{
	// TODO: Implement the logic to remove duplicates from the vector
	int res = 1;

	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[res - 1])
		{
			nums[res] = nums[i];
			res++;
		}
	}
	
}

int main()
{
	vector<int> nums = {10, 20, 20, 30, 30, 30};
	removeDuplicates(nums);

	// Print the vector after removing duplicates
	for (int num : nums)
	{
		cout << num << " ";
	}
	cout << endl;

	return 0;
}