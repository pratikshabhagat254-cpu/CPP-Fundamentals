#include <iostream>
#include <fstream>   // Provides file handling classes

using namespace std;

/*
File Writing:

ofstream stands for
Output File Stream.

Used to create and
write data into files.
*/

int main() {

    // Creates file and opens it for writing
    ofstream file("student.txt");

    // Writing data into file
    file << "Name: Pratiksha" << endl;

    file << "Age: 21" << endl;

    file << "Course: B.Tech" << endl;

    // Closes file and saves changes
    file.close();

    cout << "Data Written Successfully";

    return 0;
}