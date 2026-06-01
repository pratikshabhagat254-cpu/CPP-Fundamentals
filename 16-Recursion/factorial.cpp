#include <iostream>
using namespace std;

/*
Factorial:

n! = n × (n-1) × (n-2) ... × 1

Example:

5! = 120
*/

int factorial(int n) {

    // Base Case
    if(n == 0 || n == 1) {

        return 1;
    }

    return n * factorial(n - 1);
}

int main() {

    cout << "Factorial = "
         << factorial(5);

    return 0;
}