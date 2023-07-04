#include<iostream>
using namespace std;
int main()
{
	int testscore = 0;
	int average;
	int sum = 0;
	int i = 1;

	for (i;i<100000;i++)
	{
		cout<<"please enter test scores:";
		cin>>testscore;
	    if (testscore<0){
	        break;
	    }
		if (testscore>0)
		{
			sum+=testscore;
			average=sum/i;

		}
	}
	cout << "average is: " << average << endl;
	return 0;
}