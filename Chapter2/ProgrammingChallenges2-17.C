/*
  Kathryn bought 600 shares of stock at a price of $21.77 per share.
  She must pay her stock broker a 2 percent commission for the transaction.
  Write a program that calculates and displays the following:

  - The amount paid for the stock alon
  - The amount of the commision
  - The total amout paid
*/
#include <iostream>
using namespace std;

int main()
{
  // Variables to shares, sharePrice, shareCost,
  //  commission, commissionTotal, totalPaid
  double shares = 600,
         sharePrice = 21.77,
         shareCost,
         commission = 0.02,
         commissionTotal,
         totalPaid;

  // Calculate the shareTotal
  shareCost = shares * sharePrice;

  // Calculate the commissionTotal.
  commissionTotal = shareCost * commission;

  // Calculate the total paid.
  totalPaid = shareCost + commissionTotal;

  // Display the results.
  cout << "Total for shares alone: $" << shareCost << endl
       << "The commission is     : $" << commissionTotal << endl
       << "The total costs are   : $" << totalPaid << endl;
  

  return 0;
}
