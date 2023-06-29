#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
int num,cube;

cout<<"Input the number of terms : ";
cin>>num;
	for (int i = 0; i<=num; i++){
	cube = pow(i,3);
	cout<<"Number is : "<<i<<" and the cube of "<<i<<" is : "<<cube<<endl;
	cube=0;
	}


}
