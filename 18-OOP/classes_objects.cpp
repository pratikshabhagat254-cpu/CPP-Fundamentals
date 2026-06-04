#include <iostream>
using namespace std;

/*
Class:

A blueprint used to create objects.

Object:

An instance of a class.
*/

class Student {

public:

    string name;
    int age;
};

int main() {

    Student s1;

    s1.name = "Pratiksha";
    s1.age = 21;

    cout << "Name: "
         << s1.name << endl;

    cout << "Age: "
         << s1.age << endl;

    return 0;
}