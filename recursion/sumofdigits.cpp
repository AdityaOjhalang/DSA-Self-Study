#include<iostream>
using namespace std;

int recsumofdigits(int n){
	if(n==0)
	return 0;
	else
	return n%10+recsumofdigits(n/10);
}
int main(){
	int n = 12;
	int ans = recsumofdigits(n);
	cout<<ans<<endl;
}