#include <stdio.h>

int main() {
    int number;
    printf("Enter the number > ");
    scanf("%d", &number);
    printf("+----------------------------------------+\n");
    printf("|");
    for (int i = 1; i <= 10; i++) {
        printf("%3d ", number * i);
    }
    printf("|\n");
    printf("|");
    for (int i = 1; i <= 10; i++) {
        printf("%3d ", i);
    }
    printf("|\n");
    printf("|");
    for (int i = 1; i <= 10; i++) {
        printf("%3d ", number);
    }
    printf("|\n");
    printf("+----------------------------------------+\n");

    return 0;
}
