#include <stdio.h>
#include <string.h>
void reverse_string(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
void main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    reverse_string(str);
    printf("Reversed string: %s\n", str);
}
