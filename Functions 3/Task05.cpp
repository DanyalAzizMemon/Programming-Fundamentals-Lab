#include <iostream>
#include <cstdlib>
using namespace std;

bool perfect(int);

int main(){

int num=0,x=2;

cout<<"-------------------Perfect numbers from 1 to 1000-------------------\n\n\n";

	for (x; x<=1000 ; x++){
		if (perfect(x)){
		cout<<x<<", ";
		num++;
		}
		
	}
	cout<<endl<<endl;
	cout<<"Total numbers which qualify as perfect = "<<num<<endl;
	
	
	
	

}

bool perfect(int a){

int f=1;
for (int x=2; x<=a/2; x++){
	if(a%x==0)
	f=f+x;
	
	
}

return f ==a? 1:0;
}
