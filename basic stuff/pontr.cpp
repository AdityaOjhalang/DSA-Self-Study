#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	// // pointers are used to access resoursces that are outside the program ( HEAP MEMORY )
	// int a = 10;
	// int *p; // address variable
	// p = &a; // storing address of variable a
	// cout << *p << endl; //*p is used for dereferencing the variable
	// p = new int[5];

	// pointer to an array
	int a[5] = {2, 3, 4, 5, 6};
	int *b;
	b = a; // a of an array stores the address of the first variable and hence can be put equal to b;
	// cout << b << endl;
	// cout << *b << endl;
	b = &a[0];
	for (int i = 0; i < 5; i++)
	{
		cout << b + i << endl; // &a[i] is used to show adresss
		cout << &a[i] << endl; // &a[i] is used to show adresss
	}

	cout << *(a + 2) << endl;

	// int *k = new int[5];
	// k[0]=1,k[1]=2;
	// for(int i=0;i<5;i++){
	// 	cout << k[i] << endl;
	// }

	// delete [] k;

	// every pointer of any datatyoe takes same amount of memoery 8 byte

	// declare an int pointer
	int *pointInt;

	// declare a float pointer
	float *pointFloat;

	// dynamically allocate memory
	pointInt = new int;
	pointFloat = new float;

	// assigning value to the memory
	*pointInt = 45;
	*pointFloat = 45.45f;

	cout << *pointInt << endl;
	cout << *pointFloat << endl;
	// deallocate the memory
	delete pointInt;
	delete pointFloat;
}