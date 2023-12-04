#include <iostream>
using namespace std;

int recvfact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
		return n * recvfact(n - 1);
}
int main()
{

	int n = 4;
	int ans = recvfact(n);
	cout << ans << endl;
}