#include <iostream>
#include <cmath>

int main() {
    int n; // Number of sides
    double s; // Length of each side

    std::cout << "Enter the number of sides (n): ";
    std::cin >> n;

    std::cout << "Enter the length of each side (s): ";
    std::cin >> s;

    // Calculate the area
    double area = (n * s * s) / (4 * std::tan(M_PI / n));

    std::cout << "The area of the regular polygon with " << n << " sides is: " << area << std::endl;

    return 0;
}
