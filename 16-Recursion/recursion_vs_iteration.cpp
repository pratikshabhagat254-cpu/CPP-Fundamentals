#include <iostream>
using namespace std;

/*
Recursion:
Function calls itself.

Iteration:
Uses loops.

Both can solve many
of the same problems.
*/

void recursiveCount(int n) {

    if(n == 0) {

        return;
    }

    recursiveCount(n - 1);

    cout << n << " ";
}

int main() {

    cout << "Iteration: ";

    for(int i = 1; i <= 5; i++) {

        cout << i << " ";
    }

    cout << endl;

    cout << "Recursion: ";

    recursiveCount(5);

    return 0;
}