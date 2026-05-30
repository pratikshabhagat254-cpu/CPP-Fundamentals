#include <iostream>
using namespace std;

int main() {

    int a = 5;   // Binary: 0101

    // Bitwise NOT flips all bits
    // 0 becomes 1 and 1 becomes 0

    cout << "~a = " << (~a);
    // ~0101 = ...11111010
    // Result in decimal = -6

    return 0;
}