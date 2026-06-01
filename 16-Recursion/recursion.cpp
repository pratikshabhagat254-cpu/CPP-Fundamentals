#include <iostream>
using namespace std;

/*
Recursion:

A technique where a function
calls itself.

Every recursive function must have
a Base Case to stop recursion.
*/

void printNumbers(int n) {

    // Base Case
    if(n == 0) {

        return;
    }

    cout << n << " ";

    // Recursive Call
    printNumbers(n - 1);
}

int main() {

    printNumbers(5);

    return 0;
}