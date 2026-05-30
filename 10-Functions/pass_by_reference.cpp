#include <iostream>
using namespace std;

// Pass By Reference:
/* '&' creates an alias of the original variable.
Changes inside the function affect
the actual variable.*/

void update(int &num) {

    num = num + 10;
}

int main() {

    int num = 5;

    update(num);

    cout << "Updated Value: " << num;

    return 0;
}