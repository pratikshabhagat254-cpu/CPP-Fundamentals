#include <iostream>
#include <fstream>   // Provides file handling classes

using namespace std;

/*
File Reading:

ifstream stands for
Input File Stream.

Used to read data
from files.
*/

int main() {

    // Opens existing file for reading
    ifstream file("student.txt");

    string line;

    // Reads one complete line at a time
    while(getline(file, line)) {

        cout << line << endl;
    }

    // Closes file after reading
    file.close();

    return 0;
}