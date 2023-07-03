
#include <iostream>
using namespace std;
int qualityPoints();

int main()
{
int answer;
	answer=qualityPoints();
	cout<<answer<<endl;
  	return 0;
}


int qualityPoints(){

int avg,a;

cout<<"Enter your average: ";
cin>>avg;
    if (avg>=90 && avg<=100)
        a=4;
    
    else if (avg>=80 && avg<90)
        a=3;
    
    else if (avg>=70 && avg<80)
        a=2;
        
    else if (avg>=60 && avg<70)
        a=1;
    
    else
        a=0;
    
return a;
    
}


