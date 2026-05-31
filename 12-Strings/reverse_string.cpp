#include <iostream>
#include <string>
using namespace std;

/*
Reverse String:

Swap characters from both ends
until the middle is reached.
*/

int main() {

    string str = "hello";

    int start = 0;
    int end = str.length() - 1;

    while(start < end) {

        swap(str[start], str[end]);

        start++;
        end--;
    }

    cout << "Reversed String: " << str;

    return 0;
}