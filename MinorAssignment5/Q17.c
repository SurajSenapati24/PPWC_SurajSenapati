#include <stdio.h>
int main(){
    int b=65;
    void *p=&b;
    int *j=(int *)p;
    char *ch=(char *)p;
    printf("%d %c\n",*j,*ch);
    return 0;
}
/*Output: 65 A

Explaination: 
b = 65 – In ASCII, 65 corresponds to the character 'A'.
void *p = &b – A void pointer can hold the address of any data type. Here, it points to the address of b.
int *j = (int *)p – p is type-casted to an int pointer, so *j will dereference and retrieve the integer value 65.
char *ch = (char *)p – p is type-casted to a char pointer, and since char is 1 byte, *ch will read the first byte of b.
*/