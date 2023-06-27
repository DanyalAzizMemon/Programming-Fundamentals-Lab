#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){

int marks;

cout<<"Enter marks\n";
cin>>marks;

(marks>=90)?(cout<<"Grade is A*"):(marks>=80 && marks<=89)? (cout<<"Grade is A"):(marks>=70 && marks<=79)?(cout<<"Grade is B"):(marks>=60 && marks<=69)?(cout<<"Grade is C"):(marks>=50 && marks<=59)?(cout<<"Grade is D"):(cout<<"Grade is F");

}