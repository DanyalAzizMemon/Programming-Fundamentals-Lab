#include <iostream>
#include <iomanip>

using namespace std;

int main (){

int num, f;

cout<<"Enter number to take factorial\n";
cin>>num;

f = num - 1;

	if (num>0){
		while (f > 0){
			num = num * f;
			f--;
			}
			cout <<"Factorial is equal to: "<<num;
		}
			
		else if (num ==0 ){
			num = 0;
			cout<<"Factorial is equal to: 1";
		}
		
		else if (num<0){
			cout<<"invalid input\n";
			cout<<"re- enter number\n";
			cin>>num;
				if (num>0){
				f = num -1;
					while (f > 0){
						num = num * f;
						f= f-1;
					}
				cout <<"Factorial is equal to: "<<num;
				}
		
				else if (num ==0 ){
					num = 0;
					cout<<"Factorial is equal to: 1";
				}
				
				
			return 0;
		}
}

