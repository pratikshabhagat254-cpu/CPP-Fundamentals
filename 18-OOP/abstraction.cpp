#include <iostream>
using namespace std;

/*
Abstraction:

Showing only essential details
and hiding implementation.
*/

class Car {

public:

    void startCar() {

        cout << "Car Started"
             << endl;
    }
};

int main() {

    Car car;

    car.startCar();

    return 0;
}