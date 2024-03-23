#include <iostream>
#include <cmath>

int main() {
    double num;

    std::cout << "Enter a floating-point number: ";
    std::cin >> num;

    int rounded_down = std::floor(num);
    int rounded_up = std::ceil(num);

    std::cout << "The nearest integer using floor function is: " << rounded_down << std::endl;
    std::cout << "The nearest integer using ceil function is: " << rounded_up << std::endl;

    return 0;
}
