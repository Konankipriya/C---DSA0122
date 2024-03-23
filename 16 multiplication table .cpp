#include <iostream>

int main() {
    int number;

    std::cout << "Enter the number whose multiplication table you want to print: ";
    std::cin >> number;

    std::cout << "Multiplication table of " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " * " << i << " = " << (number * i) << std::endl;
    }

    return 0;
}
