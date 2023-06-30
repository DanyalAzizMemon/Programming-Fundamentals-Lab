#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int  num=550,num2=700, flag=0;
cout<<"Prime number between 550 and 700 inclusive: \n";

if(num <= 2) {
       num = 2;
	if (num2 >= 2) {
            cout << num << " ";
            num++;
        }
    }
    
if (num % 2 == 0)
num++;

for (int prime = num; prime <= num2; prime+=2) {
	bool flag = 1;
		for (int i = 2; i * i <= prime; ++i) {
			if (prime % i == 0) {
				flag = 0;
   
			}
		}
 

if (flag == 1)
	cout << prime <<endl;
}
 

}
