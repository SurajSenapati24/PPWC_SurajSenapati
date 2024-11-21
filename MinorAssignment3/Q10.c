#include <stdio.h>
#include <string.h>

void binaryToHexadecimal(char binary[]) {
    int length = strlen(binary);
    int start = length % 4; // to handle initial group of bits if not multiple of 4

    // Print the initial group if it's not a multiple of 4
    if (start != 0) {
        int decimalValue = 0;
        for (int i = 0; i < start; i++) {
            decimalValue = decimalValue * 2 + (binary[i] - '0');
        }
        printf("%X", decimalValue);
    }

    // Process groups of 4 bits
    for (int i = start; i < length; i += 4) {
        int decimalValue = 0;
        for (int j = i; j < i + 4; j++) {
            decimalValue = decimalValue * 2 + (binary[j] - '0');
        }
        printf("%X", decimalValue);
    }
    printf("\n");
}

int main() {
    char binary[65];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    printf("Hexadecimal: ");
    binaryToHexadecimal(binary);
    return 0;
}
