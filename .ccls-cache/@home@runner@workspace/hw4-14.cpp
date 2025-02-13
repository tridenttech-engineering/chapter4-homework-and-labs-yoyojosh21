// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <joshua> on <2/12>
// Include iomanip for setprecision  
#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    // Declare variables  
    int small, medium, large, family, total;
    double percentSmall, percentMedium, percentLarge, percentFamily;

    // Get user input  
    cout << "Enter number of small pizzas sold: ";
    cin >> small;
    cout << "Enter number of medium pizzas sold: ";
    cin >> medium;
    cout << "Enter number of large pizzas sold: ";
    cin >> large;
    cout << "Enter number of family pizzas sold: ";
    cin >> family;

    // Calculate total pizzas sold  
    total = small + medium + large + family;

    // Calculate percentages  
    if (total > 0) {
        percentSmall = (static_cast<double>(small) / total) * 100;
        percentMedium = (static_cast<double>(medium) / total) * 100;
        percentLarge = (static_cast<double>(large) / total) * 100;
        percentFamily = (static_cast<double>(family) / total) * 100;
    } else {
        percentSmall = percentMedium = percentLarge = percentFamily = 0.0;
    }

    // Display results with **FOUR** decimal places  
    cout << fixed << setprecision(4);
    cout << "\nTotal pizzas sold: " << total << endl;
    cout << "Small: " << percentSmall << "%" << endl;
    cout << "Medium: " << percentMedium << "%" << endl;
    cout << "Large: " << percentLarge << "%" << endl;
    cout << "Family: " << percentFamily << "%" << endl;

    return 0;
}
