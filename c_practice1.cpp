#include <iostream> //Input/Output stream, preprocessed information, including cout
#include <cmath>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
	cout << "Enter a radius of the circle ";
	double radius; 
	/*
	calculates the area of a circle

	*/ 
	cin >> radius; 
	char myGrade = 'A';
	bool isHappy = true;
	int myAge =29;
	float favNum =3.141592;
	double otherfavNum= 1.618033988;

	auto  area =  M_PI*pow(radius, 2);
	cout << "the AREA of the circle is " << area << endl;
	cout << "size of int" << sizeof(area) << endl;

	return 0;
}


