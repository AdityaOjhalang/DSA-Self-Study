#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = {88, 2, 5, 9990, 300000000};
	int largest = 0;

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > largest)
			largest = v[i];
	}
	cout << largest << "\n";
}