#include <iostream>
using namespace std;
int tripleCallByValue(int);
int tripleCallByReference(int&);


int main(){

	int num=2,answer,answer1;
	cout<<"\nOriginal Value : "<<num<<"\n";

	answer= tripleCallByValue(num);
	cout<<"Value after going from function by value : "<<answer<<"\n";
	cout<<"orignal value in main function after running the function : "<<num<<"\n";
	
	answer1=tripleCallByReference(num);
	cout<<"Value after going from function by reference : "<<answer1<<"\n";
	cout<<"orignal value in main function after running the function : "<<num<<"\n";

	return 0;
}

int tripleCallByValue(int a){
	a=a*3;
	return a;

}

int tripleCallByReference(int &a){
	a=a*3;
	return a;
}
