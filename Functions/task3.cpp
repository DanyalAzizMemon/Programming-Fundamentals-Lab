#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int function(int);

int main(){
    int number;
    cout<<"Enter the number you want to take square root of: ";
    cin>>number;
    function(number);
}

int function(int a){
    int answer;

    answer = pow(a,0.5);
    cout<<"The square root is equal to : "<<answer;
    return 0;
}
