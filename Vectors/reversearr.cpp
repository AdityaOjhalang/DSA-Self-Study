#include<iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
	vector<int> reversedArr;
	// TODO: Reverse the elements of the input array and store them in reversedArr
	int high = arr.size()-1;
	int low = 0;
	while(low < high){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
	return arr;
}
int main(){
	vector<int> arr = {1,2,3,4,5};
	vector<int> k = reverseArray(arr);
	for(int i =0 ; i<k.size() ; i++){
		cout<<k[i]<<endl;
	}
}
