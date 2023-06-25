#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int salary = 20000, clients, years;
    
    
    
   cout<<"Enter number of people who activated insurance policy\n";
   cin>>clients;
   cout<<"Enter number of years you worked in this company\n";
   cin>>years;
   
   salary = salary+(years*3000)+(clients*2000);
   
   cout<<"Your total salary based on your service is: "<<salary;
    
    
}