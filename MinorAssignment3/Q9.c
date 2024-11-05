#include <stdio.h>
#include <string.h>

void countCharacters(char str[]) {
    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    printf("The count of each character in the string %s is: ", str);
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c-%d, ", i, count[i]);
        }
    }
    printf("\b\b \n"); // Remove the last comma and space
}

int main() {
    char str[] = "bintu";
    countCharacters(str);
    return 0;
}
