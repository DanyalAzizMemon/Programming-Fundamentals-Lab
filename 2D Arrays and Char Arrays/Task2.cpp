
#include <iostream>
#include <iomanip>
#include <string>
void vowels(char []);
using namespace std;
int main() {
    char a[100];
   
   
   cout<<"Enter string to check frequency of vowels : ";
   cin.getline(a,100);
   
   vowels(a);
}

void vowels(char a[]){

   
   int count=0;
   
   
   
   for(int x=0; a[x] != '\0'; x++) 
      if(a[x]=='a' || a[x]=='A' ||a[x]=='e' ||a[x]=='E' ||a[x]=='i' ||a[x]=='I'|| a[x]=='o' ||a[x]=='O' ||a[x]=='u' ||a[x]=='U' )
      count++;
   
   
   cout<<"Vowels in the string are : "<<count;
  
}
