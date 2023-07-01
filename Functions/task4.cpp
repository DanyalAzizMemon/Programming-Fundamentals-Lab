#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int function(int,int);

int main(){
    int hours, min;
    cout<<"Enter hours: ";
    cin>>hours;
    cout<<"Enter minutes: ";
    cin>>min;

    function(hours,min);
}

int function(int hours, int min){
    int seconds;
    seconds =((hours*3600)+min*60);
    cout<<"The seconds are : "<<seconds;
    return 0;
}
