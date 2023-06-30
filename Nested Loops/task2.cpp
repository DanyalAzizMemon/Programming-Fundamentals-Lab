#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

int weeks = 4, days = 3,salary=20,total=0;
	for (int i = 1; i <= weeks; i++) {
		cout << "Week: " <<i<<"\nSalary before weeks start: "<<total<<endl;
			for (int j = 1; j <= days; j++) {
				cout << " Day:" << j <<" Salary: "<<salary<<endl;
				
			}
			total = 60 + total;
	}

cout<<endl;	
cout<<"Total salary after a month is : "<<total;	
return 0;
}

