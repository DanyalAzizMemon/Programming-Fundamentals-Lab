#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

	int x;
	char a[300], *a_p;
	a_p = a;
	int vowels=0;
	int consonants=0;

	cout<<"Enter string to check vowels and consonants :";
	cin.getline(a,300);
	
		for(int i=0; a[i]; i++)
		{
			if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
				vowels=vowels+1;
			
			else
				consonants=consonants+1;
		}


	cout<<"\nVOWELS : "<<vowels;
	cout<<"\nCONSONANTS : "<<consonants<<endl;

}
