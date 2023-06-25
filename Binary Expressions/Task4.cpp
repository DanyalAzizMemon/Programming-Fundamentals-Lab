#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c,first,second;
    
    cout<<"Enter value of a\n";
    cin>>a;
    cout<<"Enter value of b\n";
    cin>>b;
    cout<<"Enter value of c\n";
    cin>>c;
    
    first = (-b + sqrt((b*b)-(4*a*c)))/2;
    second = (-b - sqrt((b*b)-(4*a*c)))/2;
    
    cout<<"The first root is equal to: "<<first;
    cout<<"\nThe second root is equal to: "<<second;
    
    
}