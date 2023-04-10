#include<iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
	int a= 10;
	int &r = a; // given variable a one more name that is r .
	//r = 25; 
	int b = 1000;
	r = b;
	cout<<a<<endl;
	cout<<r<<endl;
}