#include<iostream>
#include<fstream>

using namespace std;

int main ()
{

    int counter = 0;
    ofstream file;

    file.open("STORY.txt" , ios::out);

    if(!file)
        {
            cout<<"\nFILE NOT CREATED\n";

        }
        else
        {
            file<<"The rose is red.\nA girl is playing there.\nThere is a playground.\nAn aeroplane is in the sky.\nNumbers are not allowed in the password.\n";
        }

        file.close();

        // Reading the file
        ifstream filein ("STORY.txt", ios:: in);

        if(filein.is_open())
        {
            char temp;
            while (!filein.eof())
            {
                filein.get(temp);
                if(temp == '\n' )
                {
                    filein.get(temp);
                    if(!(temp == 'a' || temp == 'A'))
                        counter++;
                }
                
                
            }
            filein.close();
        
            cout<<"The Sentences not starting with 'A' are : "<<counter<<endl;
        }

    else    
        cout<<"error\n";

    return 0;
}