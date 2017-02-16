// This program shows three variable defined on the same line.
#include <iostream>
using namespace std;

int main()
{
  int floors, rooms, suites;

  floors = 15;
  rooms = 300;
  suites = 30;

  cout << "The grande Hotel has " << floors << " floors" << endl;
  cout << "with " << rooms << " rooms and " << suites;
  cout << " suites." << endl;

  return 0;
}
