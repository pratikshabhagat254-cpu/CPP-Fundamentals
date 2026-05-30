#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 10; i++) {   // Loop runs from 1 to 10

        if(i == 6) {                 // Checks if i becomes 6
            break;                   // Stops the loop immediately
        }

        cout << i << " ";            // Displays value of i
    }

    // break is used to exit the loop

    return 0;
}