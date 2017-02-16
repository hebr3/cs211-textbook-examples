/*
  Calculate the volume of a cylindrical fuel tank where
  volume = pi * r^2 * h
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double volume, 
		   radius,
		   height,
		   pi = 3.14159;
	
	// Get the height of the tank.
	cout << "This program will tell you the volume of" << endl
		 << "a cylinder-shaped fuel tank." << endl
		 << "How tall is the tank? ";
	cin >> height;
	
	// Get the radius of the tank.
	cout << "what is the radius of the tank? ";
	cin >> radius;
	
	// Calculate the volume of the tank.
	volume = height * pow(radius, 2.0) * pi;
	
	// Display the volume of the tank.
	cout << "The volume of the tank is " << volume << endl;
		
	return 0;
}