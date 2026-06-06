#include <iostream>
#include <stdexcept>
using namespace std;

/*
Custom Exception:

Allows us to throw our own
meaningful error messages.
*/

int main() {

    int balance = 5000;

    int withdrawAmount;

    cout << "Enter Withdrawal Amount: ";

    cin >> withdrawAmount;

    try {

        if(withdrawAmount > balance) {

            throw runtime_error(
                "Insufficient Balance"
            );
        }

        cout << "Withdrawal Successful"
             << endl;
    }

    catch(runtime_error &error) {

        cout << "Exception: "
             << error.what()
             << endl;
    }

    return 0;
}