#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
	int a;
	float b;
	char c;
	a =10;
	b = 10.11;
	c = 'A';
	// cout<<a<<"  "<<&a<<"  "<<endl;
	// // cout<<b<<"  "<<&b<<"  "<<endl;
	// // cout<<c<<"  "<<&c<<"  "<<endl;
	//size of all the address buckets is same 
	int *aptr = &a ; //pointer for a
	// // aptr = &a;//pointing to the bucket a
	// cout<<aptr<<" "<<endl;
	// cout<<*aptr<<" "<<endl;
	// //FOOL THE COMPILER
	// cout<<(int*)&c<<endl;
	// //zabardasti ka bana do integer pointer
	// cout<<(void*)&c<<endl;
        cout<<sizeof(aptr)<<endl;
	int *b =10;
	cout<<b;
}