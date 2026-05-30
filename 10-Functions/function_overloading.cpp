#include <iostream>
using namespace std;

// Function Overloading:
// Multiple functions can have the same name
// if their parameter list is different.

int add(int a, int b) {

    return a + b;
}

double add(double a, double b) {

    return a + b;
}

int main() {

    cout << add(10, 20) << endl;      // Calls int version

    cout << add(10.5, 20.5);          // Calls double version

    return 0;
}