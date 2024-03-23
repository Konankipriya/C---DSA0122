#include <iostream>
int main() {
    int n;
    std::cout << "Enter the number of terms in Fibonacci series: ";
    std::cin >> n;
    int first = 0, second = 1;
    std::cout << "Fibonacci Series:\n";
    std::cout << first << " " << second << " "; 
    for (int i = 3; i <= n; ++i) {
        int next = first + second;
        std::cout << next << " ";
        first = second;
        second = next;
    }

    std::cout << std::endl;

    return 0;
}
