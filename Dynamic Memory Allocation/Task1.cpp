#include<iostream>
using namespace std;

int main()
{
    int *array = new int[10];
    int *num = new int;

    cout<<"--------Enter 10 elements of array:--------\n";

    for(int i=0;i<10;i++)
    {
        cout << "Enter the " << i+1 << " element: ";
        cin >> array[i];
    }


    cout << "\nEnter a number to find in array: ";
    cin >> *num;

    for(int i=0;i<10;i++)
    {
        if(array[i] == *num)
        {
            cout << "\nNumber is present in array";
            break;
        }
        else if(i == 9)
            cout << "\nNumber is not present in array";

    }
}