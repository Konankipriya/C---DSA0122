#include <iostream>
#include <cmath>  // Include cmath for fmod function
using namespace std;

int main() {
    float num1, num2;
    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;
    double remainder = fmod(num1, num2);  
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    if (num2 != 0) {
        cout << "Quotient: " << quotient << endl;
        cout << "Remainder: " << remainder << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }
    
    return 0;
}
