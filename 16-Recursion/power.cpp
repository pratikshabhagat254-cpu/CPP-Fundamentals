#include <iostream>
using namespace std;

/*
Power Function:

Calculates a raised to b.

Example:

2^4 = 16
*/

int power(int a, int b) {

    // Base Case
    if(b == 0) {

        return 1;
    }

    return a * power(a, b - 1);
}

int main() {

    cout << power(2, 4);

    return 0;
}