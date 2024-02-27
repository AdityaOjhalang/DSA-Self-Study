#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};

    cout << "v1: ";
    for (auto i : v1)
        cout << i << " ";
    cout << endl;

    cout << "v1.size(): " << v1.size() << endl;

    // Your code below the cursor

    // Using a for loop
    cout << "Using for loop: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    // Using auto
    cout << "Using auto: ";
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
