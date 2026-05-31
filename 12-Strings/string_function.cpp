#include <iostream>
#include <string>
using namespace std;

/*
Common String Functions:
length()
substr()
find()
append()
*/

int main() {

    string str = "CPP";

    cout << "Length: " << str.length() << endl;

    str.append(" Fundamentals");

    cout << "After Append: " << str << endl;

    cout << "Find Position: "
         << str.find("Fun") << endl;

    cout << "Substring: "
         << str.substr(4, 12);

    return 0;
}