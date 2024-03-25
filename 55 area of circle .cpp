#include <iostream>
#include <cmath>

double calculateArea(double radius) {
    const double pi = 3.14159; 
    return pi * radius * radius;
}

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius < 0) {
        std::cout << "Radius cannot be negative." << std::endl;
        return 1; 
    }

    double area = calculateArea(radius);
    std::cout << "Area of the circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}
