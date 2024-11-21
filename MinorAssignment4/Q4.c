#include <stdio.h>
int main(){
    int x=89;
    int *p1=&x;
    int *p2=&x;
    int *p3=&x;
    printf("Value of x using p1: %d\n",*p1);
    *p3=100;
    printf("Value of x after changing it using p3 is: %d\n",x);
    return 0;
}