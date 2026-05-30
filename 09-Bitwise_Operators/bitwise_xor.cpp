#include <iostream>
using namespace std;

int main() {

    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    // Bitwise XOR compares bits of both numbers
    // Result bit becomes 1 if bits are different

    cout << "a ^ b = " << (a ^ b);
    // 0101 ^ 0011 = 0110
    // Decimal result = 6

    return 0;
}