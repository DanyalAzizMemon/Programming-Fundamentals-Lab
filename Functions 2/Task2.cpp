#include <iostream>
#include <iomanip>

using namespace std ;
double circle_area(double);
double rectangle_area(double,double);
double triangle_area(double,double);


int main(){
int option;
double area, length, height, width;
cout<<"to calculate area of circle press 1"<<endl;
cout<<"to calculate area of rectangle press 2"<<endl;
cout<<"to calculate area of traingle press 3"<<endl;
cout<<"to exit press 4"<<endl;
cin>>option;


	switch (option){
		case 1:
		cout <<"enter radius"<<endl;
		cin>>length;
		area = circle_area(length);
		cout<<area;
		break;

	case 2 :
		cout <<"enter length, width :"<<endl;
		cin>>length>>width;
		area = rectangle_area(length,width);
		cout<<area;
		break;

	case 3 :
		cout <<"enter length, height :"<<endl;
		cin>>length>>width;
		area = triangle_area(length,height);
		cout<<area;
		break;

	case 4 :
		cout<<"you have exited the menu";
		break;
		
	default :
		cout <<"value out of set parameters"<<endl;
	}
}

double circle_area (double r){
	double answer;
	answer = 3.14159 * r *r;
	return answer;
}

double rectangle_area (double l, double w){
	double answer;
	answer = l * w;
	return answer;
}

double triangle_area (double l, double h){
	double answer;
	answer = l * h *0.5;
	return answer;
}
