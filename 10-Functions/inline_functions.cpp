#include <iostream>
using namespace std;

// Inline Function:
// Suggests the compiler replace the
// function call with actual code.
// Useful for very small functions.

inline int square(int n) {

    return n * n;
}

int main() {

    cout << square(5);

    return 0;
}