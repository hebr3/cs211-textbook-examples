#include <iostream>
using namespace std;
int main()
{
	// Define a named constant named CONVERSION
	// with the value 1.467.
	#define CONVERSION 1.467
	
	double milesPerHour, feetPerSecond;
	
	cout << "This program converts miles per hour to" << endl
	     << "feet per second." << endl
		 << "Enter a speed in MPH: ";
		 
	// Get the miles per hour
	cin >> milesPerHour;
	
	// Calculate feet per second.
	feetPerSecond = milesPerHour * CONVERSION;
	
	// One mile per hour equals 1.467 feet per second.
	cout << "That is " << feetPerSecond
	<< " feet per second." << endl;
	
	return 0;
}