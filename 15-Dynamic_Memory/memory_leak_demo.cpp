#include <iostream>
using namespace std;

/*
Memory Leak:

Occurs when dynamically allocated
memory is not released using delete.

The memory remains occupied even
after it is no longer needed.
*/

int main() {

    int *ptr = new int;

    *ptr = 500;

    cout << "Value: " << *ptr << endl;

    // Memory Leak Example:
    // delete ptr; is missing

    return 0;
}