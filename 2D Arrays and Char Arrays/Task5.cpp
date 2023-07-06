
#include <iostream>
#include <string>
using namespace std;
void transporse(int [][3]);

    
    
    
int main()
{   
    int a[3][3];    
        //input
        for (int x=0; x<3; x++){
            for (int y=0; y<3; y++){
                cout<<"Enter Element for index ["<<x<<"] ["<<y<<"] : ";
                cin>>a[x][y];
                
               
            }
        }
        //display before transpose 
        cout<<"\nMatrix Before transpose \n";
        for (int x=0; x<3; x++){
            for (int y=0; y<3; y++){
            cout<<a[x][y]<<"  ";    
            }
            cout<<endl;
        }        
        
         transporse(a);
            
}

void transporse(int n[][3]){
    int b[3][3];
    //transpose
    for (int x=0; x<3; x++){
            for (int y=0; y<3; y++){
                b[y][x]= n[x][y];
                
               
            }
            cout<<endl;
        }
        //display after transpose
        cout<<"\nMatrix after dispose\n";
        
        for (int x=0; x<3; x++){
            for (int y=0; y<3; y++){
            
                cout<<b[x][y]<<"  ";
            
            }
            cout<<endl;
        }        


}
