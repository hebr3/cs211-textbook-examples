/*
  Write a program that will compute a total bill
  for 5 items showing the items price, subtotal of
  the sale, sales tax, and total. Assuming 6 percent
  sales tax.
*/
#include <iostream>
using namespace std;

int main()
{
  // Variables to hold price, stateSalesTax, countySalesTax, total.
  double item1 = 12.95,
         item2 = 24.95,
         item3 = 6.95,
         item4 = 14.95,
         item5 = 3.95,
         tax = 0.06,
         sum;

  // Calculate the sum.
  sum = item1 + item2 + item3 + item4 + item5;

  // Calculate the total after tax, then calculate the tip.
  //tempTotal = price + salesTaxTotal;
  // tipAmount = tempTotal * tip;

  // Calculate the total cost.
  //  total = price + salesTaxTotal + tipAmount;

  // Display the results.
  cout << "Item1's price " << item1 << ", subtotal " << item1 / sum 
       << ", sales tax " << item1 * tax << ", total " << item1 + item1 * tax << endl;

  return 0;
}
