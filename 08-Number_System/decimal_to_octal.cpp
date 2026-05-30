#include <iostream>
using namespace std;

int main() {

    int n = 83;      // Decimal number
    int octal = 0;   // Stores octal result
    int place = 1;   // Keeps track of place value

    // Concept:
    // Divide the number by 8 repeatedly
    // Store the remainder
    // Remainders form the octal number

    while(n > 0) {              // Loop runs until n becomes 0

        int rem = n % 8;
        // Gets remainder after division by 8

        octal += rem * place;
        // Adds remainder at correct octal place

        place *= 10;
        // Moves to next octal digit place

        n /= 8;
        // Reduces number by dividing it by 8
    }

    cout << "Octal: " << octal;
    // Displays octal equivalent

    return 0;
}