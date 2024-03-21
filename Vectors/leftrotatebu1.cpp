#include<iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr){
	int temp = arr[0];
	for(int i=1;i<arr.size();i++){
		arr[i-1] = arr[i];
	}
	int n = arr.size();
	arr[n-1] = temp;

}
int main(){
	vector<int> arr = {1, 2, 3, 4, 5};
	rotate(arr);

	for(int i=0; i<arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
}