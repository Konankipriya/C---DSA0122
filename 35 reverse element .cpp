#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements into the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

output:-
Enter the size of the array: 5
Enter 5 elements into the array:
Element 1: 12
Element 2: 23
Element 3: 43
Element 4: 33
Element 5: 22
Reversed array:
22 33 43 23 12
