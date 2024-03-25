#include <iostream>

using namespace std;
int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

bool isHarshad(int number) {
    int sum = sumOfDigits(number);
    return number % sum == 0;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isHarshad(number))
        cout << number << " is a Harshad number." << endl;
    else
        cout << number << " is not a Harshad number." << endl;

    return 0;
}
