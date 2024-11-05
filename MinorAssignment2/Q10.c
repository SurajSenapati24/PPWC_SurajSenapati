#include <stdio.h>

int main() {
    int number;
    
    // Get the input number from the user
    printf("Enter the number > ");
    scanf("%d", &number);

    // Print the top border of the table
    printf("+----------------------------------------+\n");
    printf("|");
    // Print the first row of the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%3d ", number * i);
    }
    printf("|\n");

    // Print the second row with numbers 1 to 10
    printf("|");
    for (int i = 1; i <= 10; i++) {
        printf("%3d ", i);
    }
    printf("|\n");

    // Print the third row with the number repeated
    printf("|");
    for (int i = 1; i <= 10; i++) {
        printf("%3d ", number);
    }
    printf("|\n");

    // Print the bottom border of the table
    printf("+----------------------------------------+\n");

    return 0;
}
