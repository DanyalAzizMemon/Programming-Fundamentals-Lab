#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void coloured_photograph(string size);
void b_and_w(string size);
void sketch(string size);

int main()
{
	string size;
	string category;
	cout << "category can be: " << endl;
	cout << "COLOURED" << endl;
	cout << "B AND W" << endl;
	cout << "SKETCH" << endl;
	cout<<"Write the options as it is for input";
	getline(cin,category);
	
	if(category == "COLOURED")
	{
		cout << "enter your size: " << endl;
		cout << "sizes are: PASSPORT SIZE" << endl;
		cout << "6 BY 4" << endl;
		cout << "5 BY 11" << endl;
		
		getline(cin,size);
		
		coloured_photograph(size);
	}
	else if(category=="B AND W")
	{
		cout << "enter your size: " << endl;
		cout << "sizes are: PASSPORT SIZE" << endl;
		cout << "6 BY 4" << endl;
		cout << "5 BY 11" << endl;
		
		getline(cin,size);
		
		b_and_w(size);
	}
	else if(category=="SKETCH")
	{
		cout << "enter your size: " << endl;
		cout << "sizes are: PASSPORT SIZE" << endl;
		cout << "6 BY 4" << endl;
		cout << "5 BY 11" << endl;
		
		getline(cin,size);
		
		sketch(size);
	}
	else
	{
		cout << "you have entered a wrong input for category" << endl;
		cout << "right inputs are mentioned above" << endl;
	}
}

void coloured_photograph(string size)
{
	double total,total1,total2,total3;
	int no_of_copies;

	
	if(size=="PASSPORT SIZE")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "Passport Size Photograph for Rs. 10" << endl;
		total1 = 10;
		total = total1*no_of_copies;
		cout << "your total is: " << total << endl;	
	}
	else if(size=="6 BY 4")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "6’ x 4’ Photograph for Rs. 30" << endl;
		total2 = 30;
		total = total2*no_of_copies;
		cout << "your total is: " << total << endl;
	}
	else if(size=="5 BY 11")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "5’ x 11 Photograph for Rs. 50" << endl;
		total3 = 50;
		total = total3*no_of_copies;
		cout << "your total is: " << total << endl;
	}
	else
	{
		cout << "you have entered a wrong size" << endl;
	}
}

void b_and_w(string size)
{
	double total,total1,total2,total3;
	int no_of_copies;

	
	if(size=="PASSPORT SIZE")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "Passport Size Photograph for Rs. 10" << endl;
		total1 = 12;
		total = total1*no_of_copies;
		cout << "your total is: " << total << endl;	
	}
	else if(size=="6 BY 4")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "6’ x 4’ Photograph for Rs. 30" << endl;
		total2 = 35;
		total = total2*no_of_copies;
		cout << "your total is: " << total << endl;
	}
	else if(size=="5 BY 11")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "5’ x 11 Photograph for Rs. 50" << endl;
		total3 = 60;
		total = total3*no_of_copies;
		cout << "your total is: " << total << endl;
	}
	else
	{
		cout << "you have entered a wrong size" << endl;
	}
}

void sketch(string size)
{
	double total,total1,total2,total3;
	int no_of_copies;

	
	if(size=="PASSPORT SIZE")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "Passport Size Photograph for Rs. 10" << endl;
		total1 = 15;
		total = total1*no_of_copies;
		cout << "your total is: " << total << endl;	
	}
	else if(size=="6 BY 4")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "6’ x 4’ Photograph for Rs. 30" << endl;
		total2 = 40;
		total = total2*no_of_copies;
		cout << "your total is: " << total << endl;
	}
	else if(size=="5 BY 11")
	{
		cout << "enter number of copies wanted" << endl;
		cin >> no_of_copies;
		cout << "5’ x 11 Photograph for Rs. 50" << endl;
		total3 = 80;
		total = total3*no_of_copies;
		cout << "your total is: " << total << endl;
	}
	else
	{
		cout << "you have entered a wrong size" << endl;
	}
}

