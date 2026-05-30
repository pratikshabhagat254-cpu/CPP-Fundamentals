#include <iostream>
using namespace std;

// Recursion:
// A function calling itself.
//
// Base Case:
// Stops recursion from running forever.

void printNumbers(int n) {

    if(n == 0)
        return;       // Base Case

    cout << n << " ";

    // Recursive Call
    // Function calls itself with a smaller value

    printNumbers(n - 1);
}

int main() {

    printNumbers(5);

    return 0;
}