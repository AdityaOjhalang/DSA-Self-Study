#include <iostream>
using namespace std;

void printSub(string str, string curr, int index)
{	
	cout<<"Recursive call made "<<endl;
	if (index == str.length())
	{
		cout << curr << endl;
		return;
	}
	printSub(str, curr, index + 1);
	printSub(str, curr + str[index] , index + 1);
}

int main()
{

	string str = "ABC";

	printSub(str, "", 0);

	return 0;
}