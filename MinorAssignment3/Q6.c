#include <stdio.h>

void findDifference(int p[], int pSize, int q[], int qSize) {
    int isPresent;
    
    for (int i = 0; i < pSize; i++) {
        isPresent = 0;

        for (int j = 0; j < qSize; j++) {
            if (p[i] == q[j]) {
                isPresent = 1;
                break;
            }
        }

        if (!isPresent) {
            printf("%d ", p[i]);
        }
    }
}

int main() {
    int p[] = {1, 2, 3, 4};
    int q[] = {2, 4, 5, 6};
    int pSize = sizeof(p) / sizeof(p[0]);
    int qSize = sizeof(q) / sizeof(q[0]);

    printf("Difference (p - q): ");
    findDifference(p, pSize, q, qSize);

    return 0;
}
