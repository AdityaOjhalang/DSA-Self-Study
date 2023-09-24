#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

bool checkPrimeNaive(int n){
	bool prime = false;
	if (n <= 1) 
        return false; 

	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
bool checkPrimeOptimal(int n){
	if(n<=1)
	return false;

	for(int i=2;i*i<= n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}

bool checkPrimeBests(int n) {
	if(n<=1)
	return false;

	else if (n==2 || n==3)
	return true;

	else if(n%2==0 || n%3==0)
	return false;

	for(int i=5 ; i*i<=n; i+=6){
		if(n%i==0 || n%(i+2)==0)
		return false;
	}
	return true;


}
int main(){
	int n;
	cin >> n;
	cout<<checkPrimeNaive(n)<<endl;
	cout<<checkPrimeBests(n)<<endl;

}
