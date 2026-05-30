#include <iostream>
using namespace std;

int main() {
     // Operator precedence decides which operation happens first

    int result1 = 10 + 5 * 2;
    // Multiplication happens first because of operator precedence

    int result2 = (10 + 5) * 2;
    // Parentheses are solved first

    cout << "10 + 5 * 2 = " << result1 << endl;
    // Displays result without parentheses

    cout << "(10 + 5) * 2 = " << result2 << endl;
    // Displays result with parentheses

    return 0;
}