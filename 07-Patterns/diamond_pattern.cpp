#include <iostream>
using namespace std;

int main() {

    int n = 5;   // Number of rows

    // Pattern concept:
    // First loop creates the upper pyramid
    // Second loop creates the lower inverted pyramid
    // Together they form a diamond pattern

    for(int i = 1; i <= n; i++) {             // Upper pyramid

        for(int j = 1; j <= n-i; j++)         // Prints spaces
            cout << " ";

        for(int j = 1; j <= (2*i)-1; j++)     // Prints stars
            cout << "*";

        cout << endl;                         // Moves to next line
    }

    for(int i = n-1; i >= 1; i--) {           // Lower inverted pyramid

        for(int j = 1; j <= n-i; j++)         // Prints spaces
            cout << " ";

        for(int j = 1; j <= (2*i)-1; j++)     // Prints stars
            cout << "*";

        cout << endl;                         // Moves to next line
    }

    return 0;
}