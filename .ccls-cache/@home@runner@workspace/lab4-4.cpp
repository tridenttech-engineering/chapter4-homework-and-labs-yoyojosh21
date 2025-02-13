#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14;  // Define pi
    double height = 0.0, radius = 0.0, volume = 0.0;

    // Prompt and get input for radius and height
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate volume
    volume = PI * radius * radius * height;

    // Display the result
    cout << "Volume: " << volume << endl;

    return 0;
}
