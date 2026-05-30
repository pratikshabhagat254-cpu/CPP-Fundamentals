#include <iostream>
using namespace std;

int main() {

    int age = 16;   // Stores age value

    if(age >= 18) {
        // Checks if age is greater than or equal to 18

        cout << "You can vote.";
        // Executes if condition is true
    }
    else {
        // Executes if condition is false

        cout << "You cannot vote.";
        // Displays message for underage person
    }

    return 0;
}