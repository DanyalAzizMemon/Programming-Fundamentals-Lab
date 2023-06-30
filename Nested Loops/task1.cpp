#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int num;
float avg, total = 0;
	for (int a = 0 ; a < 4 ; a++){
		for (int b = 0 ; b < 3 ; b++){
		cout<<"Enter value "<<b+1<<" for player "<<b+1<<": ";
		cin>>num;
		total += num;
		}
		avg =total/3;
		cout<<"Average for player"<<a+1<<": "<<avg<<endl<<endl;
		total =0;
		avg = 0;
	}
}
