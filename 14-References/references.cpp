#include <iostream>
using namespace std;

/*
Reference:

A reference is an alias (another name)
for an existing variable.

Once a reference is created,
it cannot refer to another variable.
*/

int main() {

    int num = 10;

    // ref becomes another name for num
    int &ref = num;

    cout << "num = " << num << endl;

    cout << "ref = " << ref << endl;

    // Changing reference changes original variable
    ref = 50;

    cout << endl;

    cout << "After Modification:" << endl;

    cout << "num = " << num << endl;

    cout << "ref = " << ref << endl;

    return 0;
}