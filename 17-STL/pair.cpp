#include <iostream>
#include <utility>
using namespace std;

/*
Pair:

Stores two values together.
*/

int main() {

    pair<string, int> student;

    student.first = "Pratiksha";

    student.second = 21;

    cout << "Name: "
         << student.first << endl;

    cout << "Age: "
         << student.second;

    return 0;
}