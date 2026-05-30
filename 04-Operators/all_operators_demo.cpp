#include <iostream>
using namespace std;

int main() {

    int a = 10;   // First integer value
    int b = 5;    // Second integer value

    cout << "Arithmetic Operators" << endl;
    // Arithmetic operators perform mathematical operations

    cout << a + b << endl;   // Addition
    cout << a - b << endl;   // Subtraction
    cout << a * b << endl;   // Multiplication
    cout << a / b << endl;   // Division
    cout << a % b << endl;   // Remainder after division

    cout << "\nRelational Operators" << endl;       // \n moves output to the next line
    // Relational operators compare values

    cout << (a == b) << endl;   // Equal to
    cout << (a != b) << endl;   // Not equal to
    cout << (a > b) << endl;    // Greater than
    cout << (a < b) << endl;    // Less than

    cout << "\nLogical Operators" << endl;         // \n moves output to the next line
    // Logical operators combine conditions

    cout << ((a > b) && (b > 0)) << endl;   
    // AND returns true if both conditions are true

    cout << ((a < b) || (b > 0)) << endl;   
    // OR returns true if at least one condition is true

    return 0;
}