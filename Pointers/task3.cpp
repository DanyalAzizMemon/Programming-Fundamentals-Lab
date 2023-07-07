#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

	int a[5];
	int largest = -9999999;
	int smallest = 9999999;
	int *a_p = a;

	cout<<"\n___________________|Enter 5 numbers for array|___________________\n";

	cin>>*a_p>> *(a_p+1)>> *(a_p+2)>> *(a_p+3)>> *(a_p+4);  
	
	for(int x=0; x<5; x++)
	{
		if(a_p[x]>largest)
		largest = a_p[x];

		if(a_p[x]<smallest)
		smallest = a_p[x];
	}

	cout<<"largest: "<<largest<<endl;
	cout<<"smallest: "<<smallest<<endl;	
}
