#include <iostream>
using namespace std;

int main() {

    char ch1 = 'A';   // Character variable storing uppercase A
    char ch2 = 'a';   // Character variable storing lowercase a
    char ch3 = '0';   // Character variable storing digit 0

    cout << "ASCII of A: " << int(ch1) << endl;
    // Converts character A into its ASCII value

    cout << "ASCII of a: " << int(ch2) << endl;
    // Converts character a into its ASCII value

    cout << "ASCII of 0: " << int(ch3) << endl;
    // Converts character 0 into its ASCII value

    return 0;
}