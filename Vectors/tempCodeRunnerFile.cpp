#include<iostream>
#include <vector>
using namespace std;

bool checkarr(vector<int> arr) {
	// Your code here

	for(int i = 0 ; i < arr.size() ; i++){
		if(arr[i] > arr[i+1]){
			return false;
			break;
		}
	}
	return true;

}
int main(){
	vector<int> v = {1,3,2,4,5};
	cout<< checkarr(v) << endl;
}
