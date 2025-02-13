// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>
// hw4-11.cpp - Calculates and displays the savings account balance  
// Created/revised by <joshua> on <2/12>  

#include <iostream>
#include <iomanip> // For formatting output  
using namespace std;

int main() {
    // Declare variables  
    double beginningBalance, totalDeposits, totalWithdrawals, endingBalance;

    // Get user input  
    cout << "Enter beginning balance: ";
    cin >> beginningBalance;

    cout << "Enter total deposits: ";
    cin >> totalDeposits;

    cout << "Enter total withdrawals: ";
    cin >> totalWithdrawals;

    // Calculate the ending balance  
    endingBalance = beginningBalance + totalDeposits - totalWithdrawals;

    // Display the result with two decimal places  
    cout << fixed << setprecision(2);
    cout << "Ending balance: $" << endingBalance << endl;

    return 0;
}
