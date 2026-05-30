#include <iostream>
using namespace std;

int main() {

    int n = 5;   // Number of rows

    // Pattern concept:
    // First inner loop prints spaces
    // Second inner loop prints stars
    // Used to create pyramid shape

    for(int i = 1; i <= n; i++) {             // Controls rows

        for(int j = 1; j <= n-i; j++) {       // Prints spaces

            cout << " ";
        }

        for(int j = 1; j <= (2*i)-1; j++) {   // Prints stars

            cout << "*";
        }

        cout << endl;                          // Moves to next line
    }

    return 0;
}