#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

void swapbyaddress(int *x, int *y)
{

	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void swapbyreference(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a = 10;
	int b = 400;
	//in call by value if we make a sawp function the value will not change 
	swapbyaddress(&a, &b); // pass by address
	cout << "SWAPPED BY ADDRESS : " << a << " " << b << endl;
	swapbyreference(a, b);
	cout << "SWAPPED BY REFERENCE : " << a << " " << b << endl;
}