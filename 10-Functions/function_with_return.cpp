#include <iostream>
using namespace std;

/* Functions can return a value using
the return keyword.*/

int add(int a, int b) {

    return a + b;
}

int main() {

    int result = add(10, 20);

    cout << "Sum = " << result;

    return 0;
}