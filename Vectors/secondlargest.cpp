#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = {10, 100, 10132};
	int largest = 0;
	int secondlargest = -1;

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != v[largest])
		{
			if (v[i] > v[largest])
			{
				secondlargest = largest;
				largest = i;
			}
			else if (v[i] > v[secondlargest] && v[i] < v[largest])
				secondlargest = i;
		}
		else{
			v[secondlargest] = -1000000;
		}
	}
	cout << v[secondlargest] << endl;
}