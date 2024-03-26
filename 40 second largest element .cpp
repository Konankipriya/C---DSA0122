#include <iostream>
#include <climits>

int findSecondLargest(int arr[], int size) {
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = { 3, 8, 1, 6, 2, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest == INT_MIN) {
        std::cout << "There is no second largest element in the array." << std::endl;
    } else {
        std::cout << "The second largest element in the array is: " << secondLargest << std::endl;
    }

    return 0;
}
output :-
The second largest element in the array is: 6

--------------------------------
Process exited after 0.1024 seconds with return value 0
Press any key to continue . . .
