#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){

int a,b;

cout<<"Enter 1st number\n";
cin>>a;
cout<<"Enter 2nd number\n";
cin>>b;

	switch (a>b){
	
	case 1:
	cout<<"first number is greater than second\n";
	break;
	
	case 0:
	switch (a==b){
		
		case 1:
		cout<<a<<"\nfirst number is equal to second\n"<<b;
		break;
		
		case 0:
		cout<<"\n2nd number is greater than first\n";
		break;
		
		}
		 
	}	
}