
#include <iostream>
using namespace std;


int main(){

int a[10];


	for(int x=0;x<10;x++){
		cout<<"Enter the element for index ["<<x<<"] :";
		cin>>a[x];
	}
	
int z=sizeof(a)/sizeof(a[0]);	
	
cout << "_____________Original array as taken input from user _______________\n";
    for (int x=0;x<z;x++) 
        cout<<a[x]<<",   ";
    
cout <<"\n\n______________Unique elements of the stored array______________\n ";
    for (int x=0;x<z;x++){
        int y;
            for (y=0;y<x;y++)
               if (a[x]==a[y])
                   break;
             if (x==y)
              cout<<a[x]<<",  ";
    }
 
}
