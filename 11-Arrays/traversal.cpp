#include <iostream>
using namespace std;

/*
Traversal:
Visiting every element of an array
one by one.

This is the most common operation
performed on arrays.
*/

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array Elements:" << endl;

    // Traverse entire array
    for(int i = 0; i < 5; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}