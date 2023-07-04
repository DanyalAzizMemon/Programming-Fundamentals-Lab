#include <iostream>
using namespace std;


int main()
{
    int fic,no;

    for(int i=1; i<=10; i++)
    {
        no=i;
        fic=i;

        while(no!=1)
        {   
            fic=fic*(no-1);
            no=no-1;
        }

        if (i % 3 == 0)
            continue;
        
        else        
            cout << i << "!=" << fic << endl;

    }

    return 0;
}