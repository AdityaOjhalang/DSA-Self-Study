#include<iostream>
using namespace std;

int getsum(int n){
	if(n==0)
	return 0;
	else 
	return n+getsum(n-1);
}
int main(){
	int n=5;
	int ans = getsum(n);
	cout<<ans<<endl;
	string str = "aditya";

}
