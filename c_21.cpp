#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    // 1. size()
    cout << "Size: " << v.size() << endl;

    // 2. front()
    cout << "First element: " << v.front() << endl;

    // 3. back()
    cout << "Last element: " << v.back() << endl;

    // 4. push_back()
    v.push_back(40);
    cout << "After push_back(40): ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 5. pop_back()
    v.pop_back();
    cout << "After pop_back(): ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 6. clear()
    v.clear();
    cout << "Size after clear(): " << v.size() << endl;

    return 0;
}