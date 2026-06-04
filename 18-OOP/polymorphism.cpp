#include <iostream>
using namespace std;

/*
Polymorphism:

One function can behave
differently depending on
the situation.
*/

class Calculator {

public:

    int add(int a, int b) {

        return a + b;
    }

    int add(int a, int b, int c) {

        return a + b + c;
    }
};

int main() {

    Calculator calc;

    cout << calc.add(5, 10)
         << endl;

    cout << calc.add(5, 10, 15);

    return 0;
}