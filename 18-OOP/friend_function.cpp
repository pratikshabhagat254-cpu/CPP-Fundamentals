#include <iostream>
using namespace std;

/*
Friend Function:

A non-member function that
can access private members
of a class.
*/

class Box {

private:

    int length = 10;

    friend void showLength(Box);
};

void showLength(Box b) {

    cout << "Length: "
         << b.length;
}

int main() {

    Box box;

    showLength(box);

    return 0;
}