#include <iostream>
using namespace std;

/*
Fibonacci Series:

0 1 1 2 3 5 8 ...

Each number is the sum
of previous two numbers.
*/

int fibonacci(int n) {

    // Base Cases
    if(n == 0) {

        return 0;
    }

    if(n == 1) {

        return 1;
    }

    return fibonacci(n - 1)
         + fibonacci(n - 2);
}

int main() {

    cout << fibonacci(6);

    return 0;
}