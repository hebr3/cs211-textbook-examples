/*
  This program reads two strings into two character arrays.
*/
#include <iostream>
using namespace std;

int main()
{
	char first[16], last[16];
	
	cout << "Enter your first and last names and I will" << endl;
	cout << "reverse them." << endl;
	cin >> first >> last;
	cout << last << ", " << first << endl;
	
	return 0;
}