#include <stdio.h>

void mergeArrays(int a[], int m, int b[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < m) {
        merged[k++] = a[i++];
    }

    while (j < n) {
        merged[k++] = b[j++];
    }
}

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    int merged[m + n];

    mergeArrays(a, m, b, n, merged);

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
