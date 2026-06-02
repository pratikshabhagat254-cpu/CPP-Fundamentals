#include <iostream>
#include <set>
using namespace std;

/*
Set:

Stores unique elements
in sorted order.
*/

int main() {

    set<int> s;

    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(10);

    for(int num : s) {

        cout << num << " ";
    }

    return 0;
}