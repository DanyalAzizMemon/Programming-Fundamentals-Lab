#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int input;
cout<<"enter number of rows\n";
cin>>input;
cout<<endl<<endl<<endl;

	for ( int i = 1, k=2; i<=input; i++, k+=2){
		for (int j=1 ; j<=i ; j++){
			
			cout<<k;
		}
		cout<<endl;
	}
 
}
