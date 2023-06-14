#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n = 12345;
	int ncopy = n;
	int count=0;
	while(ncopy>0){
		ncopy = ncopy/10;
		count++;}
		cout<<count<<"\n";
}