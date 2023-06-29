#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float c,f;
    cout<<"Input temperature in Fahrenheit\nTo exit press 0\n";
    for(int i= 1; i!=0;i++){
        cin>>f;
        if (f==0){
                cout<<"You Have entered 0\nProgram ended\n";
                break;
        }        
        c = (5.0/9.0)*(f-32.0);
        cout<<"Temperature in Celsius is: "<<c<<endl;
        cout<<"Enter again\n";
            
            
    }

    
}

