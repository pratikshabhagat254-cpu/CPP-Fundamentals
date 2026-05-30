#include <iostream>
using namespace std;

int main() 
{

    int day = 3;   // Stores day number

    switch(day) {
        // switch checks the value of day

        case 1:
            cout << "Monday";
            // Executes when day is 1
            break;
            // Stops further case checking

        case 2:
            cout << "Tuesday";
            // Executes when day is 2
            break;

        case 3:
            cout << "Wednesday";
            // Executes when day is 3
            break;

        case 4:
            cout << "Thursday";
            // Executes when day is 4
            break;

        case 5:
            cout << "Friday";
            // Executes when day is 5
            break;

        case 6:
            cout << "Saturday";
            // Executes when day is 6
            break;

        case 7:
            cout << "Sunday";
            // Executes when day is 7
            break;

        default:
            // Executes if no case matches

            cout << "Invalid Day";
    }

    return 0;
}