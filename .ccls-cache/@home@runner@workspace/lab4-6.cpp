//Lab4-6.cpp - displays the area of a triangle
//Created/revised by <joshua> on <2/12>
#include <iostream>
using namespace std;

int main()
{
		// Declare variables
		double base = 11.0;
		double height = 13.0;

		// Calculate and display area
		double area = (base * height) / 2.0; // Ensure floating-point division
		cout << "Area: " << area << endl;

		return 0;
}
