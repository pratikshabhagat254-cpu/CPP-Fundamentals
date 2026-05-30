#include <iostream>
using namespace std;

int main() {

    int age = 20;        // Stores age value
    int salary = 50000;  // Stores salary value

    cout << "AND Operator: "
         << ((age >= 18) && (salary > 30000))
         << endl;
    // AND (&&) returns true only if both conditions are true

    cout << "OR Operator: "
         << ((age < 18) || (salary > 30000))
         << endl;
    // OR (||) returns true if at least one condition is true

    cout << "NOT Operator: "
         << !(age >= 18)
         << endl;
    // NOT (!) reverses the result of the condition

    return 0;
}