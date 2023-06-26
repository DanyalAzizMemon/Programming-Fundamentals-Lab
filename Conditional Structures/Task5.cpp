#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float marks;
    
    
    cout<<"Enter your marks\n";
    cin>>marks;
    
    if (marks<0 || marks>100){
        cout<<"Marks are not in range\nre-enter marks";
    }
    
    else if (marks>=90){
        cout<<"Your grade is : A*";
        }
    
    else if (marks>=80){
        cout<<"Your grade is : A";
        }
    
    else if (marks>=70){
        cout<<"Your grade is : B";
        }
    
    else if (marks>=60){
        cout<<"Your grade is : C";
        }
        
    else if (marks>=50){
        cout<<"Your grade is : D";    
        }
    
    else if (marks>=0){
        cout<<"Your grade is : F";
        }
        
           
}