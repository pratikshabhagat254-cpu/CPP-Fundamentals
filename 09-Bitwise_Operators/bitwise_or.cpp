#include <iostream>
using namespace std;

int main() {

    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    // Bitwise OR compares bits of both numbers
    // Result bit becomes 1 if at least one bit is 1

    cout << "a | b = " << (a | b);
    // 0101 | 0011 = 0111
    // Decimal result = 7

    return 0;
}