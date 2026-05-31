#include <iostream>
using namespace std;

/*
Linear Search:

Checks every element one by one
until the target element is found.

Time Complexity: O(n)

Returns:
Index of element if found
-1 if element does not exist
*/

int linearSearch(int arr[], int size, int target) {

    // Traverse entire array
    for(int i = 0; i < size; i++) {

        // Element found
        if(arr[i] == target) {

            return i;
        }
    }

    // Element not found
    return -1;
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int target = 30;

    int index = linearSearch(arr, 5, target);

    if(index != -1) {

        cout << "Element Found At Index: " << index;
    }
    else {

        cout << "Element Not Found";
    }

    return 0;
}