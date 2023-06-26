#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float price,discount=0.9,tprice;
    
    cout<<"Enter the total money you spent\n";
    cin>>price;
    
    if (price>2000){
        tprice = price * discount;
        cout<<"you availed a discount of 10 percent as the money spent was over 2000\nTotal price is : "<<tprice;
        }
    
    else {
        tprice = price;
        cout<<"Total price is : "<<tprice;
        }    
    
}