#include<iostream>
#include<fstream>

using namespace std;

int main ()
{
    int counter=0; 

    ifstream file ("OUT.txt", ios:: in);

    if(file.is_open())
	{   
        string temp;
        while (!file.eof())
		{
			file >> temp;
            counter++;
			
		}
		file.close();

    }
    counter--; //removing the null character
    cout<<"Number of Words in File : "<<counter<<endl;

    return 0;

}