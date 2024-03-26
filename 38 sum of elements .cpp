#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements into the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
output:-
Enter the size of the array: 4
Enter 4 elements into the array:
Element 1: 23
Element 2: 12
Element 3: 11
Element 4: 14
Sum of all elements in the array: 60

--------------------------------
Process exited after 5.727 seconds with return value 0
Press any key to continue . . .
