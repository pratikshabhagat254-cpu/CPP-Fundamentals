#include <iostream>
using namespace std;

int main() {

    int age = 20;   // Stores age value

    string result = (age >= 18) ? "Adult" : "Minor";
    // Ternary operator checks the condition
    // If true → stores "Adult"
    // If false → stores "Minor"

    cout << result << endl;
    // Displays the result

    return 0;
}