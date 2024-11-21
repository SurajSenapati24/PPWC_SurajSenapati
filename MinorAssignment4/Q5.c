#include <stdio.h>
int main(){
    int a=12;
    int b=25;
    int c=18;
    int *ptr=&a;
    *ptr=a+10;
    ptr=&b;
    *ptr=b+10;
    ptr=&c;
    *ptr=c+10;
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("c: %d\n",c);
    return 0;
}