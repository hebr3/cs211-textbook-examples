/*
  Write a program that will compute total for a restaurant
  bill for a patron with a $44.50 meal with 6.75 percent
  tax and 15 percent tip, after tax.
*/
#include <iostream>
using namespace std;

int main()
{
  // Variables to hold price, stateSalesTax, countySalesTax, total.
  double price = 44.50,
         salesTax = 0.0675,
         salesTaxTotal,
         tempTotal,
         tip = 0.15,
         tipAmount,
         total;

  // Calculate the tax.
  salesTaxTotal = price * salesTax;

  // Calculate the total after tax, then calculate the tip.
  tempTotal = price + salesTaxTotal;
  tipAmount = tempTotal * tip;

  // Calculate the total cost.
  total = price + salesTaxTotal + tipAmount;

  // Display the results.
  cout << "Initial price " << price << endl
       << "Sales Tax     " << salesTaxTotal << endl
       << "Tip           " << tipAmount << endl
       << "Total price   " << total << endl;

  return 0;
}
