#include <iostream>
using namespace std;

/*
Double Pointer:

A pointer that stores the address
of another pointer.

Syntax:

int **ptr;
*/

int main() {

    int num = 10;

    int *ptr = &num;

    int **doublePtr = &ptr;

    cout << "Value of num: " << num << endl;

    cout << "Using Pointer: " << *ptr << endl;

    cout << "Using Double Pointer: " << **doublePtr << endl;

    return 0;
}