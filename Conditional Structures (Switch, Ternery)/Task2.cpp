#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){

int month;

cout<<"Enter month\n";
cin>>month;

	switch (month){

	case 1:
	cout<<"\nMonth has 31 days\n";
	break;
	
	case 2:
	cout<<"\nMonth has 29 days\n";
	break;
	
	case 3:
	cout<<"\nMonth has 31 days\n";
	break;
	
	case 4:
	cout<<"\nMonth has 30 days\n";
	break;
	
	case 5:
	cout<<"\nMonth has 31 days\n";
	break;
	
	case 6:
	cout<<"\nMonth has 30 days\n";
	break;
	
	case 7:
	cout<<"\nMonth has 31 days\n";
	break;
	
	case 8:
	cout<<"\nMonth has 31 days\n";
	break;
	
	case 9:
	cout<<"\nMonth has 30 days\n";
	break;
	
	case 10:
	cout<<"\nMonth has 31 days\n";
	break;
	
	case 11:
	cout<<"\nMonth has 30 days\n";
	break;
	
	case 12:
	cout<<"\nMonth has 31 days\n";
	break;
	
	default:
	cout<<"\ninvalid input\n";
	break;
	
	}
}