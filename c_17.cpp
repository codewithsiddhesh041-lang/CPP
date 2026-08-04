// how arrays are passed 

#include<iostream>

using namespace std;

void printarray(int arr[],int size)
{
    for (int i =0;i<size;i++)
    {
        cout<<i<<" ";
    }

}


int main()
{
    int numbers[]={10,20,30,40,50};
    int size=5;
    printarray(numbers,size);
}