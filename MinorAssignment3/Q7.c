#include <stdio.h>

void copyDistinctElements(int input[], int inputSize, int output[], int *outputSize) {
    int isDistinct;
    *outputSize = 0;

    for (int i = 0; i < inputSize; i++) {
        isDistinct = 1;

        for (int j = 0; j < *outputSize; j++) {
            if (input[i] == output[j]) {
                isDistinct = 0;
                break;
            }
        }

        if (isDistinct) {
            output[*outputSize] = input[i];
            (*outputSize)++;
        }
    }
}

int main() {
    int input[] = {4, 7, 7, 3, 2, 5, 5};
    int inputSize = sizeof(input) / sizeof(input[0]);
    int output[inputSize];
    int outputSize;

    copyDistinctElements(input, inputSize, output, &outputSize);

    printf("Distinct elements: ");
    for (int i = 0; i < outputSize; i++) {
        printf("%d ", output[i]);
    }

    return 0;
}
