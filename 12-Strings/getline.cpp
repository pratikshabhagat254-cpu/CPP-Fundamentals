#include <iostream>
#include <string>
using namespace std;

/*
getline():

Reads an entire line including spaces.

Useful when input contains multiple words.
*/

int main() {

    string fullName;

    cout << "Enter Full Name: ";

    getline(cin, fullName);

    cout << "Name: " << fullName;

    return 0;
}