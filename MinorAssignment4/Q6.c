#include <stdio.h>
int main(){
    int a=12;
    int b=51;
    int c=8;
    int *ptr1=&a;
    *ptr1=a+10;
    int *ptr2=&b;
    *ptr2=b+10;
    int *ptr3=&c;
    *ptr3=c+10;
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("c: %d\n",c);
    return 0;
}