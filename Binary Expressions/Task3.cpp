#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float a,b,A,h; 
    
    cout<<"Enter value of side a\n";
    cin>>a;
    cout<<"Enter value of side b\n";
    cin>>b;
    cout<<"Enter height\n";
    cin>>h;
    
    A = ((a+b)/2)*h;
    
    cout<<"The area of trapezoid is: "<<A;
    
}