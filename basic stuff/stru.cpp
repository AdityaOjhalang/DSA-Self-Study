#include<iostream>
#include <stdio.h>
#include <cmath>
struct rectangle
{
	int length;
	int breadth;			
}r1,r2,r3;
struct card
{
	int face;
	int shape;
	int color;
};

// struct variables can also be declared outside of the main function
struct rectangle g;

using namespace std;

int main(){
	
	struct rectangle b;
	struct rectangle r = {10,5};
	r.breadth = 3;
	r.length = 33;
	int area = r.breadth*r.length;
	cout<<area<<endl;
	cout<<"SIZE IS : "<<sizeof(rectangle)<<endl;
	
	// arr of structures	
	struct card deck[52] = {{1,0,0},{2,3,4}};
	cout<<deck[0].face<<endl;
	cout<<deck[1].face<<endl;
	

}