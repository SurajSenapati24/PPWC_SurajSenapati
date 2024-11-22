#include <stdio.h>
#include<ctype.h>
int main() {
    char ch, i, j, k;
    int space;
    printf("Enter the choice of the character: ");
    scanf("%c", &ch);
    ch=toupper(ch);
    int rows = ch - 'A' + 1;
    for (i = 0; i < rows; i++) {
        for (j = 'A'; j <= ch - i; j++) {
            printf("%c ", j);
        }
        space = 2 * i - 1;
        for (k = 0; k < space; k++) {
            printf("  ");
        }
        for (j = ch - i; j >= 'A'; j--) {
            if (j != ch || i != 0) {
                printf("%c ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
