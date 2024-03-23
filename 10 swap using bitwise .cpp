#include <iostream>

void swapNumbers(int& a, int& b) {
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers to swap:\n";
    std::cout << "First number: ";
    std::cin >> num1;
    std::cout << "Second number: ";
    std::cin >> num2;
    
    swapNumbers(num1, num2);

    std::cout << "Numbers after swapping: "<<std::endl ;
	std::cout<<"first number is:"<< " "<<num1 <<"\n"<<"second number is:"<< " " << num2 << std::endl;

    return 0;
}
