/*
  Write a program that will compute the total sales tax
  on a $52 purchase. Assume the state sales tax is 4 
  percent and the county sales tax is 2 percent.
*/
#include <iostream>
using namespace std;

int main()
{
  // Variables to hold price, stateSalesTax, countySalesTax, total.
  double price = 52.0,
         stateSalesTax = 0.04,
         stateSalesTaxTotal,
         countySalesTax = 0.02,
         countySalesTaxTotal,
         total;

  // Calculate the state and county taxes.
  stateSalesTaxTotal = price * stateSalesTax;
  countySalesTaxTotal = price * countySalesTax;

  // Calculate the total bill.
  total = price + stateSalesTaxTotal + countySalesTaxTotal;

  // Display the results.
  cout << "Initial price    " << price << endl
       << "State Sales Tax  " << stateSalesTaxTotal << endl
       << "County Sales Tax " << countySalesTaxTotal << endl
       << "Total price      " << total << endl;

  return 0;
}
