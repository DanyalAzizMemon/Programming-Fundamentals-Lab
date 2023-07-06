
#include<iostream>
using namespace std;
void reverse(char[]);
int main()
{
    char a[50];
    
    
    
    cout<<"Enter string to check reverse: ";
    cin.get(a,200);
    
    reverse(a);
    
}

void reverse(char a[]){
    int y, x=0;
    char b[50];

    while(a[x]!='\0')
    {
        ++x;
        
    }
    
    y=x;
    b[y]='\0';
    y--;
    x = 0;
    while(a[x]!='\0')
    {
        b[y]=a[x];
        x++;
        y--;
    }
    
    x=0;
    
    while(b[x]!='\0')
    
    {
        a[x]=b[x];
        x++;
    }
    
    cout<<"\nReverse of string is : "<<a<<endl;

}
