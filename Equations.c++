#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter coefficients (a, b, c): ";
    std::cin >> a >> b >> c;

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Root 1: " << root1 << std::endl;
        std::cout << "Root 2: " << root2 << std::endl;
    } else if (discriminant == 0) {
        // One real root (repeated)
        double root = -b / (2 * a);
        std::cout << "Root: " << root << std::endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "Root 1 (real part): " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 (real part): " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}
