#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
struct rectangle
{
	int length;
	int breadth;
};
int arearect(rectangle *r1){
	r1->breadth = 120;
	return (r1->breadth * r1->length);
}
//if an array is in a structure only then it can be passed by a value 
int main()
{
	rectangle r = {10,5};
	int area = arearect(&r);
	cout<<area;

}