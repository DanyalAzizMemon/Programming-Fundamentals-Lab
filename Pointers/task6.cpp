#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	int size=5;
	int a[size];
	int temp = 0;
	int *a_p=a;

	cout<<"\n___________________|Enter 5 numbers for array|___________________\n";
	cin>>*a_p>>*(a_p+1)>>*(a_p+2)>>*(a_p+3)>>*(a_p+4);
	   
		for (int i=0 ; i<5; i++){
			for (int j=0; j<i; j++){        
				if (a_p[j] > a_p[i]){
					temp = a_p[i];
					a_p[i] = a_p[j];
					a_p[j] = temp;
				}
			}   
		}
	   
	cout<<"______________________|Ascending order|______________________"<<endl;  
	for (int i=0 ; i<5; i++)
		cout<<a_p[i]<<endl;
}
