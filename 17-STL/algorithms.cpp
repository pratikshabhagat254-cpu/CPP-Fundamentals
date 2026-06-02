#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Some common STL Algorithms:

sort()
reverse()
max_element()
min_element()
*/

int main() {

    vector<int> nums = {5, 2, 8, 1, 3};

    sort(nums.begin(), nums.end());

    cout << "Sorted: ";

    for(int num : nums) {

        cout << num << " ";
    }

    cout << endl;

    cout << "Maximum: "
         << *max_element(nums.begin(),
                         nums.end());

    return 0;
}