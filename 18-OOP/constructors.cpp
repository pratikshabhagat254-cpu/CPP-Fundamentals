#include <iostream>
using namespace std;

/*
Constructor:

A special function that is
automatically called when
an object is created.
*/

class Student {

public:

    string name;

    Student() {

        name = "Unknown";

        cout << "Constructor Called"
             << endl;
    }
};

int main() {

    Student s1;

    cout << "Name: "
         << s1.name;

    return 0;
}