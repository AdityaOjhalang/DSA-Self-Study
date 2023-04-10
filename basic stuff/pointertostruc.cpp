#include<iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
struct rectangle
{
	int length;
	int breadth;
};

int main(){

	rectangle r = {10,5};
	cout<<r.length<<endl<<r.breadth<<endl;
	
	rectangle *p;
	p = &r;
	cout << p -> breadth << endl; // use arrow to access struct inside variables;
	cout << p ->length << endl;
	

	rectangle *k;
	k = new rectangle;
	k -> length = 15;
	k -> breadth = 100;
	
	cout << k -> breadth << endl; 
	cout << k->length << endl;
	
}