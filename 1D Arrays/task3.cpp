
#include <iostream>
using namespace std;
int main()
{
	int a[10],b[10];

	
	for(int x=0;x<10;x++){
		cout<<"Enter the element for index ["<<x<<"] :";
		cin>>a[x];
	}
	
	cout<<"\n_______________Printing the array in reverse order__________________\n\n";
	for(int x=9,y=0;x>=0;x--,y++){
	

				b[y]=a[x];
				
			
	}
	cout<<"              ";
	for(int x=0;x<10;x++)
	
		cout<<b[x]<<",  ";
	cout<<endl;	
	
	return 0;
	
}
