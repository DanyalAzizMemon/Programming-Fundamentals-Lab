#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int count = 0;
float total = 0, num;
float average;

cout<<"Enter numbers for average\nTo quite enter 0\n";


	while (num != 0){
	cin>>num;
		if (num == 0){
			average = total / count;
			cout<<"The average is equal to: "<<average;		 
	 		return 0;
	 		}
	 	
	 	
	 	else {	
			total = total + num;
			count ++;
		}
	 		
	}

average = total / count;

cout<<"The average is equal to: "<<average;

}
