/*
Energy Drink Consumption
A soft drink company recently surveyed 12,467 of its customers and found that
approximately 14 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 64 percent of
them prefer citrus flavored energy drinks. Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or more
energy drinks per week
• The approximate number of customers in the survey who prefer citrus flavored
energy drinks
*/
#include <iostream>
using namespace std;

int main()
{
  // Variables customersSurveyed,
  int customers = 12467;
  double weeklyPercent = 0.14,
         weeklyCustomers,
         citruxPercent = 0.64,
         citruxCustomers;

  // calculate approximate number of customers who drink one or more per week
  weeklyCustomers = customers * weeklyPercent;

  // calculate approximate number of customers who perfer citrus
  citruxCustomers = customers * citruxPercent;

  // display results
  cout << "Approximately " << weeklyCustomers << " customers buy energy drinks weekly." << endl
       << "Approximately " << citruxCustomers << " customers perfer citrus flavored energy drinks"
       << endl;

  return 0;
}
