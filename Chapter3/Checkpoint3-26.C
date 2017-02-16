#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double degrees, radians;
	
	cout << "Enter an angle in degrees and I will convert it" << endl;
	cout << "to radians for you: ";
	cin >> degrees;
	radians = degrees * PI / 180;
	
	// Display the value in radians left justified, in fixed
	// point notation, with 4 places of precision, in a field
	// 5 spaces wide, making sure the decimal point is always
	// displayed.
	cout << setprecision(4) << showpoint << fixed
	     << left << setw(5) << radians << endl;
	
	return 0;
}