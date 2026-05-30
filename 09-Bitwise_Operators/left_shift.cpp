#include <iostream>
using namespace std;

int main() {

    int a = 5;   // Binary: 0101

    // Left shift (<<) moves bits to the left
    // Each left shift multiplies the number by 2

    cout << "a << 1 = " << (a << 1) << endl;
    // 0101 becomes 1010
    // Result = 10

    cout << "a << 2 = " << (a << 2) << endl;
    // 0101 becomes 10100
    // Result = 20

    return 0;
}