#include <iostream>
using namespace std;

/*
Dynamic Array:

Size can be decided during runtime.

Useful when the size is not known
before program execution.
*/

int main() {

    int size;

    cout << "Enter Array Size: ";

    cin >> size;

    // Dynamic Array Allocation
    int *arr = new int[size];

    cout << "Enter Elements:" << endl;

    for(int i = 0; i < size; i++) {

        cin >> arr[i];
    }

    cout << endl;

    cout << "Array Elements:" << endl;

    for(int i = 0; i < size; i++) {

        cout << arr[i] << " ";
    }

    // Free Dynamic Array Memory
    delete[] arr;

    arr = nullptr;

    return 0;
}