#include <iostream>
#include <queue>
using namespace std;

/*
Queue:

FIFO
(First In First Out)
*/

int main() {

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: "
         << q.front() << endl;

    q.pop();

    cout << "New Front: "
         << q.front();

    return 0;
}