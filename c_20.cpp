// how to use of vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    cout << v.size() << endl;       // 3
    cout << v.capacity() << endl;   // At least 3

    v.push_back(40);

    cout << v.size() << endl;       // 4
    cout << v.capacity() << endl;   // May become 6, 4, etc.

    return 0;
}