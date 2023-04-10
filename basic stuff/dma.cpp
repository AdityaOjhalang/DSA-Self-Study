#include<iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for ( int i =0 ; i<n ; i++){
		cin >> *(arr + i);
	}
	cout<<endl;
	for ( int i =0 ; i<n ; i++){
		cout << *(arr + i) <<endl;
	}

	
}