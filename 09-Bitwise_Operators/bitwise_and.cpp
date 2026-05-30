#include <iostream>
using namespace std;

int main() {

    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    // Bitwise AND compares bits of both numbers
    // Result bit becomes 1 only if both bits are 1

    cout << "a & b = " << (a & b);
    // 0101 & 0011 = 0001
    // Decimal result = 1

    return 0;
}