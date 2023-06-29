#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int month, count=1;
float i=2000, tax = 0.90,total;

cout<<"initial earning is: "<<i<<endl;
	for (month =1; month<=12; month++){
		i+=2000;
			if (i>20000){
				total = i;
				i *= 0.9;
				tax = total - i; 
				cout<<endl<<"As value exceeds 20000 tax of 10 percent is applied\n";
				cout<<"earning for month "<<month<<" is: "<<i<< " after "<<tax<<" money were deducted"<<endl;
				
			}
			else
			cout<<"earning for month "<<month<<" is: "<<i<<endl;
			
	}

}
