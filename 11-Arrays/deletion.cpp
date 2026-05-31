#include <iostream>
using namespace std;

/*
Deletion:
Removing an element from a specific position.

Elements after that position are shifted
one place to the left.
*/

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int size = 5;

    int position = 2;

    // Shift elements towards left
    for(int i = position; i < size - 1; i++) {

        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Array After Deletion:" << endl;

    for(int i = 0; i < size; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}