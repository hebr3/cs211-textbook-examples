/*
  This program calculates the area of a circle.
  The formula for the area of a circle is Pi times
  the radius squared. Pi is 3.14159.
*/
#include <iostream>
#include <cmath>   // needed for pow function
using namespace std;

int main()
{
	double area, radius;
	
	cout << "This program calculates the area of a circle." << endl;
	cout << "What is the radius of the circle? ";
	cin >> radius;
	
	// Calculate the area with area = pi r^2
	area = 3.14159 * pow(radius, 2.0);
	
	cout << "The area is " << area << endl;
	
	return 0;
}