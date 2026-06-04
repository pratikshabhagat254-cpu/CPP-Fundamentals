#include <iostream>
using namespace std;

/*
Destructor:

Automatically called when
an object is destroyed.
*/

class Student {

public:

    Student() {

        cout << "Constructor Called"
             << endl;
    }

    ~Student() {

        cout << "Destructor Called"
             << endl;
    }
};

int main() {

    Student s1;

    return 0;
}