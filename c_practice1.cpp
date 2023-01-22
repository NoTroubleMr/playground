#include <iostream> //Input/Output stream, preprocessed information, including cout
#include <cmath>
using namespace std;

int main() //main function
{
	cout << "Enter a radius of the circle ";
	double radius; 
	/*
	calculates the area of a circle
	*/ 
	cin >> radius; 
	double area;
	area = M_PI*pow(radius, 2);
	cout << "the area of the circle is " << area << endl;
	return 0;


}


