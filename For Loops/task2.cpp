#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int  years=10;
float i=1000,interest=1.04, total=0;	
cout<<"value in bank before interest is: "<<i<<endl;
	for (int x = 1; x<=10 ; x++){
	i*=interest;
		cout<<"value in bank after "<<x<<" years of interest is: "<<i<<endl;
	
	}

}
