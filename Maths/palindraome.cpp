#include<iostream>
using namespace std;

int main(){
		int n;
		cin>>n;
		int copy = n;
		int rev=0;
		while(copy > 0){
			int ld = copy%10;
			rev = rev*10 + ld;
			copy = copy/10;
		}
		if(rev==n)
			cout <<"the number is a palindrome";
		
		else
			cout <<"the number is NOT a palindrome";


}