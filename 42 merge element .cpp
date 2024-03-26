#include <iostream>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = { 1, 3, 5, 7 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 2, 4, 6 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    std::cout << "Merged array: ";
    for (int i = 0; i < mergedSize; i++) {
        std::cout << mergedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
output:-
Merged array: 1 2 3 4 5 6 7

--------------------------------
Process exited after 0.1112 seconds with return value 0
Press any key to continue . . .

