#include <iostream>
using namespace std;

// Function to print numbers from n to 1 recursively.
// It first checks if n is 0; if so, it stops the recursion (base case).
// Otherwise, it prints the current value of n followed by a space,
// and then calls itself with n-1, thus decreasing the value each time.
// The function stops printing once n reaches 0.
int printNto1(int n)
{
   if (n == 0)
      return 0;
   cout << n << " ";
   printNto1(n - 1);
}

// Function to print numbers from 1 to n recursively.
// This function also checks if n is 0 for its base case.
// However, it first calls itself with n-1 before printing n.
// This means it will first reach the base case with n=0, and while returning
// from the recursive calls, it prints the numbers in ascending order.
// The function effectively stacks all the calls and then prints on unwind.
int print1toN(int n)
{
   if (n == 0)
      return 0;
   print1toN(n - 1);
   cout << n << " ";
}

int main()
{
   int n = 10;
   printNto1(n); // Calls the function to print numbers from 10 to 1.
   cout << endl;
   print1toN(n); // Calls the function to print numbers from 1 to 10.
}
