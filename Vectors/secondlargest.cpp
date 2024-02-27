#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = {1, 2, 999999999, 4, 10000};
	int largest = 0;
	int secondlargest = -1;

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > v[largest])
		{
			secondlargest = largest;
			largest = i;
		}
		else if (v[i] > v[secondlargest] && v[i] < v[largest])
			secondlargest = i;
	}
	cout << v[secondlargest];
}