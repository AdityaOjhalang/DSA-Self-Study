#include<iostream>
using namespace std;

int gcdnaive(int x , int y ){
	int res = min(x,y);
	while(res>0){
		if(x%res==0 and y%res==0){
			break;
	}
	res--;
	}
	return res;

}
int gcdeuclideanNaive(int x , int y){
	while(x!=y){
		if(x>y){
			x =x-y;
		}
		else{
			y = y-x;
		}
	}
	return x; // koi bhi return kardo cause both will be same 
}
int gcdeuclideanBEST(int x , int y){
	if(y==0)
	return x;
	else
	return gcdeuclideanBEST(y,x%y);
}

int lcm ( int x , int y){
	int prod = x*y;
	int gcd = gcdeuclideanBEST(x,y);
	int lcm = prod/gcd;
	return lcm;
}
int main(){
	int a,b;
	a = 16 ;
	b = 20;

	cout<< "GCD for them through Naive is : "<< gcdnaive(a,b) << endl ;
	cout<< "GCD for them through Naive is : "<< gcdeuclideanNaive(a,b) << endl;
	cout<< "GCD for them through Naive is : "<< gcdeuclideanBEST(a,b) << endl;
	cout<<lcm(a,b);



}