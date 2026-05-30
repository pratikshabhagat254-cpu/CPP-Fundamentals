#include <iostream>
using namespace std;

int main() {

    int n = 255;               // Decimal number
    string hexadecimal = "";
    // Stores hexadecimal result

    char hexDigits[] = "0123456789ABCDEF";
    // Array containing hexadecimal digits

    // Concept:
    // Divide the number by 16 repeatedly
    // Store the remainder
    // Use remainder as index to get hexadecimal digit

    while(n > 0) {                    // Loop runs until n becomes 0

        int rem = n % 16;
        // Gets remainder after division by 16

        hexadecimal = hexDigits[rem] + hexadecimal;
        // Adds hexadecimal digit at beginning of string

        n /= 16;
        // Reduces number by dividing it by 16
    }

    cout << "Hexadecimal: " << hexadecimal;
    // Displays hexadecimal equivalent

    return 0;
}
