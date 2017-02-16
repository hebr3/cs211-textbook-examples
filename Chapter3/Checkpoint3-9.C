/*
  This program asks for the user's weight in pounds
  and displays the equivalent weight in kilograms.
*/
#include <iostream>
using namespace std;

int main()
{
	double pounds, kilograms;
	
	// Prompt for user's weight in pounds
	cout << "Please enter your weight in pounds ";
	cin >> pounds;
	
	// convert pounds to kilograms
	kilograms = pounds / 2.2;
	
	// Write user's converted weight
	cout << "You weight " << kilograms << " kilograms" << endl;
	
	return 0;
}