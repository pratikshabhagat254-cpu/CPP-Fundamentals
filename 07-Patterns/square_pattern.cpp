#include <iostream>
using namespace std;

int main() {

    int n = 5;   // Number of rows and columns

    // Pattern concept:
    // Outer loop controls rows
    // Inner loop controls columns

    for(int i = 1; i <= n; i++) {        // Runs for each row

        for(int j = 1; j <= n; j++) {    // Runs for each column

            cout << "* ";                // Prints star pattern
        }

        cout << endl;                    // Moves to next line
    }

    return 0;
}