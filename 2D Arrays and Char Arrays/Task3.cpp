
#include <iostream>
void frequency(char[]);
using namespace std;

int main() {
   char input[100];
   
   
   cout<<"Enter string to check frequency of characters : ";
   cin.getline(input,100);
   
   frequency(input);
   
   
}

void frequency(char input[]){
    int x=0,y,alpha[26]={0} ;
    
    
   while (input[x]!='\0') {
      if (input[x]>='a'&&input[x]<='z') {
         y = input[x]-'a';
         ++alpha[y];
      }
      ++x;
   }
   cout<<"Frequency of alphabets present in the string are :"<<endl;
   for (x = 0;x<26;x++){
   if(alpha[x]==0){
       continue;
   }
   else
   cout<< char(x + 'a')<<" : "<<alpha[x]<<"\n";
   }
   
}
