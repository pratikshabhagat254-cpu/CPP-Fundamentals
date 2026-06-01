#include <iostream>
using namespace std;

/*
delete:

Memory allocated using 'new'
must be released using 'delete'.

This prevents memory wastage.
*/

int main() {

    int *ptr = new int;

    *ptr = 50;

    cout << "Value: " << *ptr << endl;

    // Free allocated memory
    delete ptr;

    // Good Practice
    ptr = nullptr;

    return 0;
}