//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by <joshua> on <2/12>

#include <iostream>
using namespace std;

int main()
{
  //declare variables
  double sales = 0.0;
  double commissionRate = 0.0;
  double commission = 0.0;

  //enter sales amount and commission rate
  cout << "Sales amount: ";
  cin >> sales;
  cout << "Commission rate (in decimal form): ";
  cin >> commissionRate;

  //calculate and display the commission
  commission = sales * commissionRate;
  cout << "Commission: $" << commission << endl;

  return 0;
} //end of main function

