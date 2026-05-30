#include <iostream>
using namespace std;

int main() {

    int n = 5;   // Number of rows

    // Pattern concept:
    // Outer loop controls rows
    // Inner loop prints numbers in each row
    // Numbers increase from 1 up to current row number

    for(int i = 1; i <= n; i++) {        // Controls rows

        for(int j = 1; j <= i; j++) {    // Prints numbers

            cout << j << " ";
        }

        cout << endl;                    // Moves to next line
    }

    return 0;
}