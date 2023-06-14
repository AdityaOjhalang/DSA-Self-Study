#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

long long factorial(int n){
	if(n==0) 
	return 1;
	else 
	return (n* factorial(n-1));

}

int main(){
	int n = 100;
	int fact = factorial(n);
	int counter=0;
	bool isDivisible = true;
	while(isDivisible) {
		if(fact % 10 == 0){
			counter++;	
			fact = fact/10;
			

		}
		else {
		isDivisible = false;
		cout<< counter;
		}
		
	}

}