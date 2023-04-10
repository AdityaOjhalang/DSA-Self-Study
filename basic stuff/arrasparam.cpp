#include<iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
void printarr(int arr[], int n){
	arr[8] = 100;
	for(int i =0 ; i<n;i++){
		cout<<arr[i]<<endl;
	}
	arr[5] = 100;
}
int *createdynamicarr(int n){
	int *p;
	p = new int[n];
	for(int i =0 ; i<n;i++){
		p[i]=i+1;
	}
	return p;
}
int main(){
	int a[10] = {2,4,6,8,9};
	// printarr(a,10);
	int *k;
	k = createdynamicarr(10);
	printarr(k,10);

}