#include <iostream>
#include <map>
using namespace std;

/*
Map:

Stores key-value pairs
in sorted order.
*/

int main() {

    map<string, int> marks;

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