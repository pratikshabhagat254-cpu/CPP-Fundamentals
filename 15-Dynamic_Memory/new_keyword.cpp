#include <iostream>
using namespace std;

/*
Dynamic Memory Allocation:

Normally variables are created
during compile time.

The 'new' keyword allocates memory
during runtime from the Heap Memory.
*/

int main() {

    // Dynamically allocate integer
    int *ptr = new int;

    *ptr = 100;

    cout << "Value: " << *ptr << endl;

    cout << "Address: " << ptr << endl;

    return 0;
}