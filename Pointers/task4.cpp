#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	char a[500];
	char *a_p;   
	int count=0;
 
	cout << "Length checker of string\nEnter a sentence\n\n";
	cin.getline(a,500);

	a_p = a;

		while (*a_p!='\0')
		{
			count++;
			a_p++;
		}

	cout << "Length : "<<count<<endl;

}
