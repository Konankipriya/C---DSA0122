#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperature;
    char choice;

    std::cout << "Enter temperature: ";
    std::cin >> temperature;

    std::cout << "Convert to (C)elsius or (F)ahrenheit? ";
    std::cin >> choice;

    switch (choice) {
        case 'C':
        case 'c':
            std::cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius." << std::endl;
            break;
        case 'F':
        case 'f':
            std::cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
