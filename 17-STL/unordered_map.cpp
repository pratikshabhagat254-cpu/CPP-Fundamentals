#include <iostream>
#include <unordered_map>
using namespace std;

/*
unordered_map:

Stores key-value pairs.

Order is not guaranteed.
*/

int main() {

    unordered_map<string, int> marks;

    marks["Math"] = 95;

    marks["Science"] = 90;

    for(auto subject : marks) {

        cout << subject.first
             << " : "
             << subject.second
             << endl;
    }

    return 0;
}