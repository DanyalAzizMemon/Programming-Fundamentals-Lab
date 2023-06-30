#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int table1,table2,r1,r2,i;

cout<<"enter number from where you want to start your table: ";
cin>>table1;
cout<<"enter number where you want to end your table: ";
cin>>table2;
cout<<"Enter 2 number from where you want to start and end your table\n";
cout<<"starting number: ";
cin>>r1;
cout<<"Ending number: ";
cin>>r2;

	for (int i = table1; i<=table2; i++){
		cout<<"table:"<<i<<endl;
		for (int j =r1; j<=r2; j++){
		cout<<i<<" * "<<j<<" = "<<i*j<<endl;
		}
		cout<<endl;
		
	}



}
