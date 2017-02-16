// The following program will not compile 
// because the lines have been mixed up.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char person[15] = "Wolfgang Smith";

	cout << right;

	cout << setw(20);
	cout << person << endl;

	cout << left;
	cout << person << endl;

	return 0;
}
