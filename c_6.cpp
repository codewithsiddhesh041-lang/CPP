#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stream;
    int marks;

    cout << "Enter Stream (Science/Commerce): ";
    cin >> stream;

    if (stream == "Science")
    {
        cout << "Enter PCM Marks: ";
        cin >> marks;

        if (marks >= 90)
            cout << "Eligible for Engineering";
        else
            cout << "Not eligible for Engineering";
    }
    else if (stream == "Commerce")
    {
        cout << "Enter Accounts Marks: ";
        cin >> marks;

        if (marks > 90)
            cout << "Eligible for B.Com (Hons)";
        else
            cout << "Choose a suitable course";
    }
    else
    {
        cout << "Choose a suitable course";
    }

    return 0;
}