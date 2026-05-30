#include <iostream>
using namespace std;

int main() {

    int n = 13;       // Decimal number
    int binary = 0;   // Stores binary result
    int place = 1;    // Keeps track of place value

    // Concept:
    // Divide the number by 2 repeatedly
    // Store the remainder (0 or 1)
    // Remainders form the binary number

    while(n > 0) {            // Loop runs until n becomes 0

        int rem = n % 2;      // Gets remainder after division by 2

        binary += rem * place;
        // Adds remainder at correct binary place

        place *= 10;
        // Moves to next binary digit place

        n /= 2;
        // Reduces number by dividing it by 2
    }

    cout << "Binary: " << binary;
    // Displays binary equivalent

    return 0;
}