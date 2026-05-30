#include <iostream>
using namespace std;

int main() {

    int n = 5;   // Number of rows

    // Pattern concept:
    // Outer loop controls rows
    // Inner loop prints alphabets
    // Characters increase from A in each row

    for(int i = 0; i < n; i++) {              // Controls rows

        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            // Prints characters from A up to current row

            cout << ch << " ";
        }

        cout << endl;                         // Moves to next line
    }

    return 0;
}