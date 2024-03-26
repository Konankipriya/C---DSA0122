#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, pos;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements into the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the position of the element to delete (1 to " << size << "): ";
    cin >> pos;
    if (pos < 1 || pos > size) {
        cout << "Invalid position! Please enter a position between 1 and " << size << "." << endl;
        return 0;
    }
    for (int i = pos - 1; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Array after deletion:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
output:-
Enter the size of the array: 4
Enter 4 elements into the array:
Element 1: 23
Element 2: 12
Element 3: 24
Element 4: 15
Enter the position of the element to delete (1 to 4): 1
Array after deletion:
12 24 15

--------------------------------
Process exited after 7.243 seconds with return value 0
Press any key to continue . . .
