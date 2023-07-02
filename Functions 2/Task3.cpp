#include <iomanip>
#include <iostream>

using namespace std;
double earning(double);


int main(){
    double fixed_salary = 2000;
    double commission, answer;

    cout<<"Enter the amount you have sold this week "<<endl;
    cin>>commission;
    if (commission == 0){
        cout << "you have earned 2000";
    }

    else{
        answer = earning(commission);
        cout<<"you have earned '"<<answer<<"' this week";
    }

}

double earning( double c){
    double ans;
    ans= c*0.09 + 2000;
    return ans;
}



