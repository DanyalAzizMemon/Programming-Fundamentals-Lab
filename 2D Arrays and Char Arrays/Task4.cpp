
#include<iostream>
void multiply(int[][10], int[][10], int[][10],int,int,int,int);

using namespace std;
int main(){    
int r1,r2,c1,c2; 
int a[10][10],b[10][10],c[10][10];





        cout<<"Enter number of rows for matrix 1 : ";
        cin>>r1;
        cout<<"Enter number of columns for matrix 1 : ";
        cin>>c1;
        
        cout<<"\nEnter number of rows for matrix 2 : ";
        cin>>r2;
        cout<<"Enter number of columns for matrix 2 : ";
        cin>>c2;

    while (r2!=c1){
       cout<<"\n\nColumn one should be equal to row 2\nRe-enter values\n";
       cout<<"\nEnter number of rows for matrix 1 : ";
        cin>>r1;
        cout<<"Enter number of columns for matrix 1 : ";
        cin>>c1;
        
        cout<<"\nEnter number of rows for matrix 2 : ";
        cin>>r2;
        cout<<"Enter number of columns for matrix 2 : ";
        cin>>c2;      
    }
    
    cout<<"\n**********Enter Values for matrix 1**********\n";
    
    for (int x=0; x<r1;x++){
        for (int y=0; y<c1;y++){
        
        cout<<"Enter an integer for ["<<x+1<<"] ["<<y+1<<"]  :  ";
        cin>>a[x][y];
        }
        cout<<"\n";
    }
                                
    cout<<"\n**********Enter Values for matrix 2**********\n";
    for (int x=0; x<r1;x++){
        for (int y=0; y<c1;y++){
        
        cout<<"Enter an integer for ["<<x+1<<"] ["<<y+1<<"]  :  ";
        cin>>b[x][y];
        }
        cout<<endl;
    }

    for (int x=0; x<r1;x++){
        for (int y=0; y<c1;y++){
        
        c[x][y]=0;
        }
        
    }
    
    multiply(a,b,c,c1,r1,c2,r2);
    
}    

void multiply(int a[][10], int b[][10], int c[][10], int c1, int r1, int c2, int r2){
    
for(int x=0;x<r1;++x){
        for(int y=0;y<c2;++y){
            for(int z=0;z<c1; ++z){
                c[x][y]+=a[x][z] * b[z][y];
            }
        }    
    }
cout<<"The output of multiplication is\n";
for(int x=0;x<r1;++x){
        for(int y=0;y<c2;++y){
        
            cout<<c[x][y]<<"  ";
        
        }
        cout<<endl;
}        
    
    
}
