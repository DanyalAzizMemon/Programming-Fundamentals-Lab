#include<iostream>
#include<fstream>

using namespace std;

int main ()
{
    ofstream fileout;
    fileout.open("NOTES.TXT", ios ::out);
      
        if(!fileout)
            cout<<"\nFILE NOT CREATED\n";

        else
        {
            for (int i=1; i<101; i++)
                fileout << i << endl;
        }

        fileout.close();

    return 0;
}