#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void rev(int *a , int n){
	int i=0;
	int j=n-1;
	while(j>=i){
		swap(a[i],a[j]);
		j--;
		i++;
	}

for (int i = 0; i < n; i++)
	{
		cout << *(a+i) <<" ";
	}
}
int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr) / 4;
	rev(arr,n);
}