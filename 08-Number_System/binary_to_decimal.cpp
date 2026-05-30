#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int binary = 1101;   // Binary number
    int decimal = 0;     // Stores decimal result
    int power = 0;       // Stores power of 2

    // Concept:
    // Take digits from right to left
    // Multiply each digit with 2 raised to power
    // Add all values to get decimal number

    while(binary > 0) {                  // Loop runs until binary becomes 0

        int digit = binary % 10;
        // Gets last digit of binary number

        decimal += digit * pow(2, power);
        // Converts binary digit into decimal value

        power++;
        // Increases power of 2

        binary /= 10;
        // Removes last digit from binary number
    }

    cout << "Decimal: " << decimal;
    // Displays decimal equivalent

    return 0;
}