#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

	int size = 5;
	int a[size];
	int *a_p = a;

	cout<<"\n___________________|Enter 5 numbers for array|___________________\n";

	cin>>*a_p>>*(a_p+1)>>*(a_p+2)>>*(a_p+3)>>*(a_p+4);
	

	cout<<"\n______________________|Printing in reverse using pointers|______________________\n\n";

	for(int b=4; b>=0; b--){
		cout<<a_p[b]<<"\n";
   	}
}
