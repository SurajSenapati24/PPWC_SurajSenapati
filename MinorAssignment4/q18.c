#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Figure 1: 
    int *arr = (int *)malloc(4 * sizeof(int)); 
    for (int i = 0; i < 4; i++) {
        arr[i] = i + 1; 
    }
    int *maxvar=&arr[3];
    printf("Figure 1:\narr: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nmaxvar: %d\n", *maxvar);

    // Figure 2: 
    int **arr2 = (int **)malloc(4 * sizeof(int *));
    int *sumarr = (int *)malloc(4 * sizeof(int));
    printf("\nFigure 2:");
    printf("\narr2: \n");
    for (int i = 0; i < 4; i++) {
        arr2[i] = (int *)malloc(4 * sizeof(int));
        for (int j = 0; j < 4; j++) {
            arr2[i][j] = i + j + 1;
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 4; j++) {
        sumarr[j] = 0;
        for (int i = 0; i < 4; i++) {
            sumarr[j] += arr2[i][j];
        }
    }
    printf("\nElement-wise sum: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", sumarr[i]);
    }
    printf("\n");

    // Figure 3: 
    char **argv = (char **)malloc(5 * sizeof(char *));
    argv[0] = strdup("mine");
    argv[1] = strdup("cs");
    argv[2] = strdup("sc");
    argv[3] = strdup("soa");
    argv[4] = NULL;
    printf("\nFigure 3:\nStrings:\n");
    for (int i = 0; argv[i] != NULL; i++) {
        printf("%s\n", argv[i]);
    }
    free(arr);
    free(maxvar);
    for (int i = 0; i < 4; i++) {
        free(arr2[i]);
    }
    free(arr2);
    free(sumarr);
    for (int i = 0; argv[i] != NULL; i++) {
        free(argv[i]);
    }
    free(argv);

    return 0;
}
