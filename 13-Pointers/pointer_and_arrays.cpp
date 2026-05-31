#include <iostream>
using namespace std;

/*
Arrays and Pointers are closely related.

The array name stores the address
of the first element.
*/

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Address of First Element: " << arr << endl;

    cout << "First Element: " << *arr << endl;

    cout << "Second Element: " << *(arr + 1) << endl;

    cout << "Third Element: " << *(arr + 2) << endl;

    return 0;
}