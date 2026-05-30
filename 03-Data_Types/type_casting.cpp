#include <iostream>
using namespace std;

int main() {

    // Implicit Type Casting
    // Automatic conversion from one data type to another
    int a = 10;          // Integer variable
    double b = a;        // int value automatically converted to double

    cout << "Implicit Type Casting:" << endl;

    cout << "a = " << a << endl;
    // Displays the integer value

    cout << "b = " << b << endl;
    // Displays the converted double value

    cout << endl;

    // Explicit Type Casting
    // Manual conversion done by the programmer
    double pi = 3.14;        // Double variable
    int value = (int)pi;     // Converts double into integer

    cout << "Explicit Type Casting:" << endl;

    cout << "pi = " << pi << endl;
    // Displays original double value

    cout << "value = " << value << endl;
    // Decimal part is removed after conversion

    return 0;
}