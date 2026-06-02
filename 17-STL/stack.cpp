#include <iostream>
#include <stack>
using namespace std;

/*
Stack:

LIFO
(Last In First Out)
*/

int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top Element: "
         << s.top() << endl;

    s.pop();

    cout << "New Top: "
         << s.top();

    return 0;
}