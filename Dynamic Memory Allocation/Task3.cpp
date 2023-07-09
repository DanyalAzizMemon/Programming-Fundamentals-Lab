#include<iostream>
using namespace std;

int main()
{
    int *array = new int[10];
    int *Largest = new int;

    *Largest =-999999;

    cout<<"--------Enter 10 elements of array:--------\n";

    for(int i=0;i<10;i++)
    {
        cout << "Enter the " << i+1 << " element: ";
        cin >> array[i];
    }

    for(int i=0;i<10;i++)
    {
        if(array[i] > *Largest)
            *Largest = array[i];
    }

    cout << "\nLargest number in array is: " << *Largest;
}