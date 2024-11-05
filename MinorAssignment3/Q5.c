#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int bottom = 0;
    int top = size - 1;
    int found = 0;
    int index = -1;

    while (bottom <= top && !found) {
        int middle = (bottom + top) / 2;

        if (arr[middle] == target) {
            found = 1;
            index = middle;
        } else if (arr[middle] > target) {
            top = middle - 1;
        } else {
            bottom = middle + 1;
        }
    }

    return index;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
