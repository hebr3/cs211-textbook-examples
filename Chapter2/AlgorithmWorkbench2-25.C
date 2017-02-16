/*
  Convert the following pseudocode to C++ code. Be sure to define
  the appropriate variables.

  Store 20 in speed variable.
  Store 10 in the time variable.
  Multiply speed by time and store the result in the distance variable
  Display the contents of the distance variable.
*/
#include <iostream>
using namespace std;

int main()
{
  // Variables to hold speed, time, and distance.
  double speed = 20,
         time = 10,
         distance;

  // Calculate the distance.
  distance = speed * time;

  // Display the results.
  cout << "The distance is " << distance << endl;

  return 0;
}
