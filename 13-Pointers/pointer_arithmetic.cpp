#include <iostream>
using namespace std;

/*
Pointer Arithmetic:

Pointers can move through memory
using increment and decrement operators.

For integer pointers,
increment moves by sizeof(int).
*/

int main() {

    int arr[3] = {10, 20, 30};

    int *ptr = arr;

    cout << "Initial Address: " << ptr << endl;

    ptr++;

    cout << "After Increment: " << ptr << endl;

    cout << "Value at New Address: " << *ptr << endl;

    return 0;
}