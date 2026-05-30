#include <iostream>
using namespace std;

int main() {

    int age = 22;             // Stores age value
    bool hasLicense = true;   // Stores driving license status

    if(age >= 18) {
        // Checks if person is 18 or older

        if(hasLicense) {
            // Checks if person has a driving license

            cout << "You can drive.";
            // Executes if both conditions are true
        }
        else {

            cout << "Get a driving license first.";
            // Executes if license is not available
        }

    }
    else {

        cout << "You are underage.";
        // Executes if age is below 18
    }

    return 0;
}