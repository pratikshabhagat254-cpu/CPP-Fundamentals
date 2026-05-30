#include <iostream>
using namespace std;

int main() {

    int rows = 4;   // Number of rows
    int cols = 6;   // Number of columns

    // Pattern concept:
    // Outer loop controls rows
    // Inner loop controls columns

    for(int i = 1; i <= rows; i++) {      // Runs for each row

        for(int j = 1; j <= cols; j++) {  // Runs for each column

            cout << "* ";                 // Prints star
        }

        cout << endl;                     // Moves to next line
    }

    return 0;
}