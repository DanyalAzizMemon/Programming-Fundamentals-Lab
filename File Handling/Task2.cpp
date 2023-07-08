#include<iostream>
#include<fstream>

using namespace std;

int main ()
{

int counter=0;

string quote = "\nTime is a great teacher but unfortunately it kills all its pupils\n";

ofstream file("OUT.txt", ios ::out);

if(!file)
{
    cout<<"\nFILE NOT CREATED\n";
}

else 
{
    file<<quote;

}


file.close();

ifstream filein ("OUT.txt", ios:: in);

if(filein.is_open())
{
    char temp;
    while (!filein.eof())
    {
        filein.get(temp);
        if(temp == '\n' || temp == '\0' || temp == ' ' )
        {
            continue;
        }
        counter++;
        
    }
    filein.close();
}

    cout<<"\nAlphabets = "<<counter<<endl;




    return 0;
}