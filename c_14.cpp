// recusrion in c++

#include <iostream>
using namespace std;

void f(int x)
{
    if (x > 0)
    {
        cout << x << " ";   // Step 1

        f(x - 2);           // Step 2 (Recursive call)

        cout << x << " ";   // Step 3
    }
}

int main()
{
    f(5);
    return 0;
}