
#include <iostream>
#include <iomanip>


using namespace std;
int c;
int divide(int , int );
int main()
{
int b=2;
cout<<"a = 6 and b = 2\nThey will be divided\n\n";
cout<<"Two arguments passed to function"<<endl;
divide(6,2);
cout<<endl;


cout<<"One Argument passed"<<endl;
divide(6,b);
}
int divide(int a,int b=2){

    c=a/b;
    cout<<"Answer : "<<c<<endl;
    return c;
}
