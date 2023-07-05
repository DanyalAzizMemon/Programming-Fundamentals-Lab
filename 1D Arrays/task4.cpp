
#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int temp;
	
	for(int x=0;x<10;x++)
	{
		cout<<"Enter the element for index ["<<x<<"] :";
		cin>>a[x];
	}
	
	cout<<"\n_______________Printing the array in ascending order__________________\n\n";
	for(int x=0;x<10;x++)		
		for(int y=x+1;y<10;y++)
		{
			if(a[x]>a[y])
			{
				temp=a[x];
				a[x]=a[y];
				a[y]=temp;
			}
		}
	cout<<"                ";
	for(int x=0;x<10;x++)
	
		cout<<a[x]<<",  ";
	cout<<endl;	
	
	return 0;
	
}
