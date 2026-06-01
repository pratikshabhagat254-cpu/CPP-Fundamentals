#include <iostream>
using namespace std;

/*
Recursive Binary Search:

Works only on sorted arrays.

Time Complexity: O(log n)
*/

int binarySearch(int arr[],
                 int start,
                 int end,
                 int target) {

    // Base Case
    if(start > end) {

        return -1;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == target) {

        return mid;
    }

    if(target > arr[mid]) {

        return binarySearch(arr,
                            mid + 1,
                            end,
                            target);
    }

    return binarySearch(arr,
                        start,
                        mid - 1,
                        target);
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int target = 40;

    cout << "Index: "
         << binarySearch(arr,
                         0,
                         4,
                         target);

    return 0;
}