#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b;
    
    cout<<"Enter 2 numbers\n";
    cin>>a>>b;
    
    (a>b)? cout<<"The largest number you entered is : "<<a : cout<<"The largest number you entered is : "<<b;
    
}