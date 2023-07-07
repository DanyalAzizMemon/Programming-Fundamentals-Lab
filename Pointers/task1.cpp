#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	int a, b;
	int *a_p,*b_p;
	

	cout<<"Enter a number for variable a : ";
	cin>>a;


	cout<<"Enter a number for variable b : ";
	cin>>b;

	a_p = &a;
	b_p = &b;

	cout<<"\n\nValue stored in pointer of a is : "<<*a_p<<" at address :  "<<a_p;
	cout<<"\nValue stored in pointer of b is : "<<*b_p<<" at address :  "<<b_p<<endl;
}

