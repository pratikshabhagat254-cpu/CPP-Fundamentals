#include <iostream>
using namespace std;

int main()
  {

    int i = 1;   // Starting value of loop variable

    do {

        cout << i << " ";
        // Displays value of i

        i++;
        // Increases value of i by 1

    } while(i <= 5);
    // Condition is checked after loop execution

    // do-while loop runs at least one time

    return 0;
}
