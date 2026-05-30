#include <iostream>
using namespace std;

int main() {

    int a = 10;   // Initial value of a

    cout << "Initial Value: " << a << endl;
    // Displays the starting value

    a += 5;
    // Same as: a = a + 5

    cout << "After += 5 : " << a << endl;
    // Displays value after addition assignment

    a -= 3;
    // Same as: a = a - 3

    cout << "After -= 3 : " << a << endl;
    // Displays value after subtraction assignment

    a *= 2;
    // Same as: a = a * 2

    cout << "After *= 2 : " << a << endl;
    // Displays value after multiplication assignment

    a /= 4;
    // Same as: a = a / 4

    cout << "After /= 4 : " << a << endl;
    // Displays value after division assignment

    return 0;
}