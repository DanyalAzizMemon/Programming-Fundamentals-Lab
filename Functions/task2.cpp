#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void function(){

	float Cel, far ;

	cout<<"Enter temperature in Celsius: ";
	cin>>Cel;

	far = (Cel*(1.8))+32;
	cout<<"Temperature in farhenheight is: "<<far;
	

}

int main(){

	function();

}
