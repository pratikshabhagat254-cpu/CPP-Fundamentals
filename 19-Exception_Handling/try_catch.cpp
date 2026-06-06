#include <iostream>
using namespace std;

/*
Exception Handling:

Used to handle runtime errors
without crashing the program.

Keywords:
try
throw
catch
*/

int main() {

    int age;

    cout << "Enter Age: ";

    cin >> age;

    try {

        if(age < 18) {

            throw age;
        }

        cout << "Eligible For Driving License"
             << endl;
    }

    catch(int value) {

        cout << "Exception Caught!"
             << endl;

        cout << "Age " << value
             << " is below the required limit."
             << endl;
    }

    return 0;
}