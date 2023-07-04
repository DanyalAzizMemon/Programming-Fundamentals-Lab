#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 1, nextNumber = 0;


    cout << "Fibonacci Series: ";

    for (int i = 1; i <= 20; ++i)
    {
        if(i == 1)
        {
            cout << " " << num1;
            continue;
        }
        if(i == 2)
        {
            cout << num2 << " ";
            continue;
        }
        nextNumber = num1 + num2;
        num1 = num2;
        num2 = nextNumber;
        cout << nextNumber << " ";
    }
    return 0;
}