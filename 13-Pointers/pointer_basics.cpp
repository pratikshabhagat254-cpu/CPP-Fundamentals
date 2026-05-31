#include <iostream>
using namespace std;

/*
Pointer:

A pointer is a variable that stores
the memory address of another variable.

&  -> Address Of Operator
*  -> Dereference Operator
*/

int main() {

    int num = 10;

    // Stores address of num
    int *ptr = &num;

    cout << "Value of num: " << num << endl;

    cout << "Address of num: " << &num << endl;

    cout << "Pointer stores: " << ptr << endl;

    // Access value using pointer
    cout << "Value using Pointer: " << *ptr << endl;

    return 0;
}