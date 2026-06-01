#include <iostream>
using namespace std;

/*
Print Counting:

Print numbers from 1 to N
using recursion.
*/

void printCounting(int n) {

    // Base Case
    if(n == 0) {

        return;
    }

    printCounting(n - 1);

    cout << n << " ";
}

int main() {

    int n = 5;

    printCounting(n);

    return 0;
}