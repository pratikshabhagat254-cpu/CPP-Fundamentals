#include <iostream>
using namespace std;

/*
Inheritance:

Allows one class to acquire
properties and methods
of another class.
*/

class Animal {

public:

    void speak() {

        cout << "Animal Sound"
             << endl;
    }
};

class Dog : public Animal {

public:

    void bark() {

        cout << "Woof Woof"
             << endl;
    }
};

int main() {

    Dog d;

    d.speak();

    d.bark();

    return 0;
}