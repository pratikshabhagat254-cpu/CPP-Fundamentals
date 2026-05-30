#include <iostream>
using namespace std;

int main() {

    int marks = 85;   // Stores student's marks

    if(marks >= 90) {
        // Checks if marks are 90 or more

        cout << "Grade A";
        // Displays Grade A
    }
    else if(marks >= 80) {
        // Executes if marks are between 80 and 89

        cout << "Grade B";
        // Displays Grade B
    }
    else if(marks >= 70) {
        // Executes if marks are between 70 and 79

        cout << "Grade C";
        // Displays Grade C
    }
    else if(marks >= 60) {
        // Executes if marks are between 60 and 69

        cout << "Grade D";
        // Displays Grade D
    }
    else {
        // Executes if marks are below 60

        cout << "Fail";
        // Displays fail message
    }

    return 0;
}