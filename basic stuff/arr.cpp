#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
	string a ;
	cout<<"Enter a line :";
	getline(cin,a);
	cout<<a<<endl;
	int arr[5] = {1,34,2,34,4};
	
	cout<<sizeof(arr)/sizeof(int)<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
}
