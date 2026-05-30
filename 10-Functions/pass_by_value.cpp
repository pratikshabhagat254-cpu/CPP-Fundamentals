#include <iostream>
using namespace std;

// Pass By Value:
/* A copy of the variable is sent to the function.
 Changes inside the function do NOT affect
 the original variable.*/

void update(int num) {

    num = num + 10;

    cout << "Inside Function: " << num << endl;
}

int main() {

    int num = 5;

    update(num);

    cout << "Outside Function: " << num << endl;

    return 0;
}