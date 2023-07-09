#include<iostream>
using namespace std;

int main()
{
    int *array = new int[20];
   
    int *positive = new int;
    int *negative = new int;
    int *odd = new int;
    int *even = new int;

    *positive = 0, *negative = 0, *odd = 0, *even = 0;

    cout<<"--------Enter 20 elements of array:--------\n";
    for(int i=0;i<20;i++)
    {
        cout << "Enter the " << i+1 << " element: ";
        cin >> array[i];
    }
        

    for(int i=0;i<20;i++)
    {
        if(array[i] > 0)
            *positive += 1;

        else if(array[i] < 0)
            *negative += 1;

        if(array[i] % 2 == 0)
            *even += 1;

        else
            *odd += 1;
    }

    cout << "Number of positive numbers: " << *positive << endl;
    cout << "Number of negative numbers: " << *negative << endl;
    cout << "Number of odd numbers: " << *odd << endl;
    cout << "Number of even numbers: " << *even << endl;


}