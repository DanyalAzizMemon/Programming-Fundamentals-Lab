
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    
    for(int x=0;x<10;x++){
		cout<<"Enter the element for index ["<<x<<"] :";
		cin>>a[x];
	}
    
    int z=sizeof(a)/sizeof(a[0]);
    
    
    cout << "_________________Original array as taken input from user_________________\n\n";
        
        for (int x=0;x<10;x++){ 
                cout << a[x] <<",  ";
        }
        
    int i,s,pairs=0;
    
    cout<<"\n\nEnter the number to check if any pairs make up to its sum : ";
    cin>>s;
    cout <<"\nArray pairs whose sum is equal to "<<s;
    
    for (int x=0; x<z; x++){
        for (int y=x+1; y<z; y++){
            if (a[x]+a[y]==s){
                cout<<"\n"<<a[x]<<","<<a[y];
                pairs++;
            }
        }
    }    
    cout<<"\nNumber of pairs whose sum is equal to "<<s<<": "<<pairs;
    
    
    return 0; 
}
