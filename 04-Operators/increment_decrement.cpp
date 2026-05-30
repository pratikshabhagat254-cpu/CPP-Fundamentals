#include <iostream>
using namespace std;

int main() {

    int a = 10;   // Initial value of a

    cout << "Initial Value: " << a << endl;
    // Displays the starting value

    cout << "Post Increment: " << a++ << endl;
    // First displays value, then increases it by 1

    cout << "Value After Post Increment: " << a << endl;
    // Displays updated value after post increment

    cout << "Pre Increment: " << ++a << endl;
    // First increases value by 1, then displays it

    cout << "Post Decrement: " << a-- << endl;
    // First displays value, then decreases it by 1

    cout << "Value After Post Decrement: " << a << endl;
    // Displays updated value after post decrement

    cout << "Pre Decrement: " << --a << endl;
    // First decreases value by 1, then displays it

    return 0;
}