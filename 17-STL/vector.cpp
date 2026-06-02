#include <iostream>
#include <vector>
using namespace std;

/*
Vector:

A dynamic array provided by STL.

Unlike arrays, vectors can grow
or shrink during runtime.
*/

int main() {

    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Elements: ";

    for(int num : numbers) {

        cout << num << " ";
    }

    cout << endl;

    cout << "Size: " << numbers.size();

    return 0;
}