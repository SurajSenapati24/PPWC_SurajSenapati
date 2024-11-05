#include <stdio.h>

int main() {
    char ch, i, j, k;
    int space;

    // Get the input character from the user
    printf("Enter the choice of the character: ");
    scanf("%c", &ch);

    // Determine the number of rows based on the input character
    int rows = ch - 'A' + 1;

    // Loop to print each row
    for (i = 0; i < rows; i++) {
        // Print the ascending part of the row
        for (j = 'A'; j <= ch - i; j++) {
            printf("%c ", j);
        }

        // Print the spaces in the middle
        space = 2 * i - 1;
        for (k = 0; k < space; k++) {
            printf("  ");
        }

        // Print the descending part of the row
        for (j = ch - i; j >= 'A'; j--) {
            if (j != ch || i != 0) { // Avoid printing the middle element twice in the first row
                printf("%c ", j);
            }
        }

        printf("\n");
    }

    return 0;
}
