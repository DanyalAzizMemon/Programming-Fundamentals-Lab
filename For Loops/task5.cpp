#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int input, total = 0;
float average;
	for (int x = 0 ; x < 4 ; x++){
		for (int y = 0 ; y < 3 ; y++){
			cout<<"Enter value "<<y+1<<" for player "<<x+1<<": ";
			cin>>input;
			total += input;
		}
			average =total/3;
			cout<<"Average for player"<<x+1<<": "<<average<<endl<<endl;
			total =0;
			average = 0;
	}
}
