
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  int coins = 100;
  int c = 0;
  
  do{
      int n = (rand ()%100) + 1;
      srand (time(0));
      cout << "\nprice of "<<c+1<<" is: "<<n;
      coins = coins - n;
      c++;
      
      
  }
  
  while (coins>=0);
 cout<<"\nTotal quantity purchased is: "<<c;
}

