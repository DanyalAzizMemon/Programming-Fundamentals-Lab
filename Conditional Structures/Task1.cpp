#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b, largest = 0;
    
    cout<<"Enter 2 numbers\n";
    cin>>a>>b;
    
    if (a>b){
        largest = a;
        }
        
    else {
        largest = b;
        }    
    
    cout<<"The largest number you input is : "<<largest;    
    }