#include <iostream>
#include <fstream>   // Provides file handling classes

using namespace std;

/*
Appending Data:

ios::app means
Append Mode.

New data is added at
the end of the file
without deleting
existing content.
*/

int main() {

    // Opens file in append mode
    ofstream file(
        "student.txt",
        ios::app
    );

    // Adds new data to file
    file << "City: Nagpur" << endl;

    // Closes file after writing
    file.close();

    cout << "Data Appended Successfully";

    return 0;
}