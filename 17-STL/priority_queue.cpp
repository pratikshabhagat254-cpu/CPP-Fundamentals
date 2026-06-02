#include <iostream>
#include <queue>
using namespace std;

/*
Priority Queue:

Largest element gets
highest priority by default.
*/

int main() {

    priority_queue<int> pq;

    pq.push(10);
    pq.push(50);
    pq.push(30);

    cout << "Top Element: "
         << pq.top();

    return 0;
}