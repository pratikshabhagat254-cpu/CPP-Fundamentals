#include <iostream>
using namespace std;

/*
Insertion:
Adding a new element at a specific position.

To create space, elements are shifted
one position to the right.
*/

int main() {

    int arr[10] = {10, 20, 30, 40, 50};

    int size = 5;

    int position = 2;

    int element = 25;

    // Shift elements towards right
    for(int i = size; i > position; i--) {

        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[position] = element;

    size++;

    cout << "Array After Insertion:" << endl;

    for(int i = 0; i < size; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}