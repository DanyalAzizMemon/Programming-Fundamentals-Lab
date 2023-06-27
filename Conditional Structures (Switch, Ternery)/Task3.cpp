#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){

char input;

cout<<"Enter something to check if it is alphabet, digit or special symbol\n";
cin>>input;

	switch ((input>='A') && (input<='z')){
	
	case 1:
	cout<<input<<"  is an alphabet\n";
	break;
	
	case 0:
		switch ((input >= '0')&&( input<='9')){
		
		case 1:
		cout<<input<<"  is a number\n";
		break;
		
		case 0:
		cout<<input<<"  is a special character\n";
		break;		
		
		
		}
	
	break;
	}

}