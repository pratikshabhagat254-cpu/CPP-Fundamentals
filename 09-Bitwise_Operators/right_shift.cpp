#include <iostream>
using namespace std;

int main() {

    int a = 20;   // Binary: 10100

    // Right shift (>>) moves bits to the right
    // Each right shift divides the number by 2

    cout << "a >> 1 = " << (a >> 1) << endl;
    // 10100 becomes 1010
    // Result = 10

    cout << "a >> 2 = " << (a >> 2) << endl;
    // 10100 becomes 101
    // Result = 5

    return 0;
}