#include <iostream>
#include <unordered_set>
using namespace std;

/*
unordered_set:

Stores unique elements.

Order is not guaranteed.
*/

int main() {

    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);

    for(int num : s) {

        cout << num << " ";
    }

    return 0;
}