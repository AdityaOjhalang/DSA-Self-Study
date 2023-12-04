#include<iostream>
using namespace std;

int recfib(int n){
	if(n==0 )
	return 0;
	else if (n==1)
	return 1;
	else
	return recfib(n-1)+recfib(n-2);
	}

int main(){
	int n = 10;
	int ans = recfib(n);
	cout<<ans<<endl;
}
