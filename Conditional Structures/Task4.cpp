#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float attendance,c_held,c_attended;
    
    
    cout<<"How many classes were held?\n";
    cin>>c_held;
    cout<<"How many classes did you attend?\n";
    cin>>c_attended;
    
    attendance = c_attended / c_held * 100;
    
    if (attendance >= 75){
        cout<<"Your attendance is : "<<attendance<<"\nYou can sit in the exams\n";
        }
    
    else {
        cout<<"Your attendance is : "<<attendance<<"\nYou cannot sit in the exams\n";
        }    
    
    
    
}