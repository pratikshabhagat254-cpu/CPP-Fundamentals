#include <iostream>
using namespace std;

// Default Arguments:
// Used when no value is provided during
// the function call.

void printName(string name = "Guest") {

    cout << "Hello " << name << endl;
}

int main() {

    printName();            // Uses default value

    printName("Pratiksha"); // Overrides default value

    return 0;
}