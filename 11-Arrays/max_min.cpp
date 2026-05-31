#include <iostream>
using namespace std;

/*
Maximum and Minimum Element:

Traverse the array and compare each element
with the current maximum and minimum value.

Time Complexity: O(n)
*/

int main() {

    int arr[5] = {25, 10, 90, 45, 5};

    int maximum = arr[0];

    int minimum = arr[0];

    // Compare every element
    for(int i = 1; i < 5; i++) {

        if(arr[i] > maximum) {

            maximum = arr[i];
        }

        if(arr[i] < minimum) {

            minimum = arr[i];
        }
    }

    cout << "Maximum Element: " << maximum << endl;

    cout << "Minimum Element: " << minimum << endl;

    return 0;
}