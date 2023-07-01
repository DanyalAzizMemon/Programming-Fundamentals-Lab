#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int function(int,int);

int main(){
int num1,num2;
cout<<"Enter the number 1: ";
cin>>num1;
cout<<"Enter the number 2: ";
cin>>num2;
function(num1,num2);
}

int function(int num1, int num2){
int greater = 0;

if (num1>num2){
	cout<<num1<<" is greater than "<<num2;
}

else 
	cout<<num2<<" is greater than "<<num1;	

return 0;
}
