#include <stdio.h>
#include <string.h>

char firstRepetitiveCharacter(char str[]) {
    int found[256] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (found[(int)str[i]]) {
            return str[i];
        }
        found[(int)str[i]] = 1;
    }

    return '\0';
}

int main() {
    char str[] = "racecar";
    char result = firstRepetitiveCharacter(str);

    if (result != '\0') {
        printf("The first repetitive character in the string %s is %c.\n", str, result);
    } else {
        printf("No repetitive character found in the string %s.\n", str);
    }

    return 0;
}
