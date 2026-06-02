#include <iostream>
#include <deque>
using namespace std;

/*
Deque:

Double Ended Queue.

Insertion and deletion
possible from both ends.
*/

int main() {

    deque<int> d;

    d.push_front(10);

    d.push_back(20);

    d.push_back(30);

    cout << "Elements: ";

    for(int num : d) {

        cout << num << " ";
    }

    return 0;
}