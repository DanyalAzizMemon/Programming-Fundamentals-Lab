#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void copyupper(char x[150])
{
    char y[150];

    for (int i = 0; i < 17; i++)
    {
        if (x[i] == ' ')
            y[i] = ' ';
        

        else if (x[i] >= 65 && x[i] <= 90)
            y[i] = x[i];

        else
        {
            x[i] = x[i] - 32;
            y[i] = x[i];
        }
    }

    ofstream copyfile("SECOND.txt");
    for(int i = 0; i < 17; i++)
    {
        copyfile << y[i];
        cout << y[i];
    }
    copyfile.close();
}

int main ()
{   
    char array[150];

    //creating the first.txt file
    fstream file;
    file.open("FIRST.txt", ios ::out);

    if(!file)
        cout<<"\nFILE NOT CREATED\n";

    else     
        file<<"danyal aziz memon";

    file.close();

    file.open("FIRST.txt");
	
	if(file.is_open())
	{
        int count =  0;
		while (count < 17)
		{
			char temp;
            file.get(temp);
            array[count] = temp;
            count++;      
		}

        file.close();
        copyupper(array);		
    }

    return 0;
}