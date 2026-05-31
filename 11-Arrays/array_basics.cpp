#include <iostream>
using namespace std;

/*
Array:
A collection of elements of the same data type
stored in contiguous memory locations.

Interview Note:
Arrays provide O(1) access using index.
*/

int main() {

    // Array Declaration and Initialization
    int arr[5] = {10, 20, 30, 40, 50};

    // Accessing elements using index
    cout << "First Element: " << arr[0] << endl;

    cout << "Last Element: " << arr[4] << endl;

    // Total size of array in bytes
    cout << "Array Size (Bytes): " << sizeof(arr);

    return 0;
}