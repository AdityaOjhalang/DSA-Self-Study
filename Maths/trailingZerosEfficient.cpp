#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n =5;
	int res = 0;
	for(int i=5; i<n; i= i*5){
		res=res+ (n/i);
	}
	cout << res;
}
