/*
  Convert the following pseudocode to C++ code. Be sure to define
  the appropriate variables.

  Store 172.5 in the force variable.
  Store 27.5 in the area variable.
  Divide area by force and store the result in the pressure variable.
  Display the contents of the pressure variable.
*/
#include <iostream>
using namespace std;

int main()
{
  // Variables to hold force, area, and pressure.
  double force = 172.5,
         area = 27.5,
         pressure;

  // Calculate the area.
  pressure = area / force;

  // Display the results.
  cout << "The pressure is " << pressure << endl;

  return 0;
}
