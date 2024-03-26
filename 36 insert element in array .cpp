#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, position, newValue;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements into the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the position to insert (1 to " << size + 1 << "): ";
    cin >> position;
    cout << "Enter the new value to insert: ";
    cin >> newValue;
    if (position < 1 || position > size + 1) {
        cout << "Invalid position. Please enter a position between 1 and " << size + 1 << "." << endl;
        return 0;
    }
    for (int i = size; i >= position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = newValue;
    size++;
    cout << "Array after insertion:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
output:-
  Enter the size of the array: 5
Enter 5 elements into the array:
Element 1: 34
Element 2: 12
Element 3: 11
Element 4: 24
Element 5: 34
Enter the position to insert (1 to 6): 4
Enter the new value to insert: 67
Array after insertion:
34 12 11 67 24 34

--------------------------------
Process exited after 12.16 seconds with return value 0
Press any key to continue . . .

