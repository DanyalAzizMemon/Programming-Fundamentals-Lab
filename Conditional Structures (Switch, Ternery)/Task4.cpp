#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){

int a,b,option;

cout<<"Enter number 1\n";
cin>>a;
cout<<"Enter number 2\n";
cin>>b;

cout<<"To add press 0\nto subtract press 1\nto multiply press 2\nto divide press 3\nto take mod press 4\n";
cin>>option;

	switch(option){
	
	case 0:
	cout<<"\na + b = "<<a+b;
	break;
	
	case 1:
	cout<<"\na - b = "<<a-b;
	break;
	
	case 2:
	cout<<"\na * b = "<<a*b;
	break;
	
	case 3:
		switch (b==0){
		
		case 1: 
		cout<<"denominator cannot be zero";
		break;
		
		case 0:
		cout<<"\na / b = "<<a/b;
		break;
		}
	break;
	
	
	case 4:
	cout<<"\na % b = "<<a%b;
	break;
	
	default:
	cout<<"\ninvalid option selected\n";
	break;
	}
}