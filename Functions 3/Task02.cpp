#include <iostream>
#include <cstdlib>
using namespace std;

int flip();

int main(){
	int a, h=0, t=0, total=1;
	cout<<"This program will tell the random number of head and tails out of 100\n\n";
	for (total; total<101 ; total++){
	
	a = flip();
	
	if (a==1){
		cout<<"It is tails\n";
		t++;
	}
	else if(a==0){
		cout<<"It is heads\n";
		h++;
	}	
	
	
	}
	
	cout<<"Number of Tails out of 100: "<<t<<"\n";
	cout<<"Number of Heads out of 100: "<<h<<"\n";
}

int flip(){
	return rand()%2;
}
