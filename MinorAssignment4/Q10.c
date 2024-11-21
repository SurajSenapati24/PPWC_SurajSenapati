#include<stdio.h>
int main(){
    int a[]={120,502,118,188,106,447};
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int *ptr4;
    int *ptr5;
    int *ptr6;
    ptr1=&a[0];
    ptr2=&a[1];
    ptr3=&a[2];
    ptr4=&a[3];
    ptr5=&a[4];
    ptr6=&a[5];
    printf("a[0]: %d\n",*ptr1);
    printf("a[1]: %d\n",*ptr2);
    printf("a[2]: %d\n",*ptr3);
    printf("a[3]: %d\n",*ptr4);
    printf("a[4]: %d\n",*ptr5);
    printf("a[5]: %d\n",*ptr6);
    return 0;
}