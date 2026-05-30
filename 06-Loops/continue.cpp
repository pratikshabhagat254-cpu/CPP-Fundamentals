#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 10; i++) {   // Loop runs from 1 to 10

        if(i == 6) {                 // Checks if i becomes 6
            continue;                // Skips current iteration
        }

        cout << i << " ";            // Displays value of i
    }

    // continue skips one iteration and moves to the next

    return 0;
}