#include <iostream>
#include <iomanip>

using namespace std ;


int add();
int sub();
int mul();
int div();
int num1,num2;

int main (){
    int option;

    cout <<"Enter number 1 : "<<endl;
    cin>>num1;
    cout <<"Enter number 2 : "<<endl;
    cin>>num2;
    cout<<endl<<"to take sum press 1";
    cout<<endl<<"to multiply press 2";
    cout<<endl<<"to substract press 3";
    cout<<endl<<"to divide press 4";
    cout<<endl<<"to exit press any other integer"<<endl;

    cin>>option;

    switch(option){

        case 1:
            int add();
            cout <<num1+num2;
            break;

        case 2:
            int subtract();
            cout <<num1-num2;
            break;

        case 3:
            double multiply();
            cout <<num1*num2;
            break;

        case 4:
            double division();
            cout <<num1/num2;
            break;

        default:
            cout<<"you have exited the program";
            break;
    }
}
int add(){
    cout<<num1+num2;
}
int substract(int num1,int num2){
    cout <<num1-num2;
}

int multiply(int num1,int num2){
    cout<< num1*num2;
}

int division(int num1,int num2){
    cout<<num1/num2;
}

