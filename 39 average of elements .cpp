#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
    double sum = 0, avg;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements into the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i]; 
    }
    avg = sum / size;
    cout << "Average of all elements in the array: " << avg << endl;

    return 0;
}
output:-
Enter the size of the array: 4
Enter 4 elements into the array:
Element 1: 23
Element 2: 11
Element 3: 12
Element 4: 9
Average of all elements in the array: 13.75

--------------------------------
Process exited after 8.052 seconds with return value 0
Press any key to continue . . .
