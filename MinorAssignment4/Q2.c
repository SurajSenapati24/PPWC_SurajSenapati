#include <stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("a: %d\n",a);
    printf("Address of a: %p\n",&a);
    printf("b: %d\n",b);
    printf("Address of b: %p\n",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("After Swapping\n");
    printf("a: %d\n",a);
    printf("Address of a: %p\n",&a);
    printf("b: %d\n",b);
    printf("Address of b: %p\n",&b);
    return 0;
}