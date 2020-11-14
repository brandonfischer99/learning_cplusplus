#include <iostream>
#include <iomanip>
using namespace std;

const float TAX_RATE = 0.04;

int main()
{
   string name;
   float price = 4.50, charge, taxCharge;
   int qty = 0;
   
   cout << "Enter the number of the item you wish to order: \n";
   cin >> qty;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);

   charge = price * qty;
   taxCharge = charge * TAX_RATE;
   cout << "The tax charged is $" << setprecision(2) << taxCharge << endl;
   
   charge = charge + taxCharge;
   cout << "Your total charge: $" << setprecision(2) << charge << endl;

   return 0;
   

}
