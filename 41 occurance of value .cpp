#include <iostream>

int countOccurrences(int arr[], int size, int value) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = { 3, 7, 2, 7, 8, 7, 1, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int valueToFind = 7;

    int occurrences = countOccurrences(arr, size, valueToFind);

    std::cout << "The value " << valueToFind << " occurs " << occurrences << " times in the array." << std::endl;

    return 0;
}
output:-
The value 7 occurs 3 times in the array.

--------------------------------
Process exited after 0.1121 seconds with return value 0
Press any key to continue . . .
