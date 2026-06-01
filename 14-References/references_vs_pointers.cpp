#include <iostream>
using namespace std;

/*
References and Pointers both provide
indirect access to variables.

References are simpler and safer.

Pointers are more powerful and flexible.
*/

int main() {

    int num = 10;

    int &ref = num;

    int *ptr = &num;

    cout << "Original Value: " << num << endl;

    cout << "Using Reference: " << ref << endl;

    cout << "Using Pointer: " << *ptr << endl;

    return 0;
}