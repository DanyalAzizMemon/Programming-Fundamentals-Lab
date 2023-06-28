
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int num , total=0, count=0;
  cout<<"Enter numbers to reach to 100\n";
  do {
      
      cin>>num;
      total = total + num;
      count++;
     
      }
      
  while(total<100);
  cout<<"\nyou reached a sum of 100 by using "<<count<< " numbers\n";    
}

