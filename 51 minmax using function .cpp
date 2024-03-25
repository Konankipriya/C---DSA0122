#include <iostream>
using namespace std;
int findMinimum(const int arr[], int size) {
    int minElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

int findMaximum(const int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int minElement = findMinimum(arr, size);
    int maxElement = findMaximum(arr, size);
    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;
    
    return 0;
}
