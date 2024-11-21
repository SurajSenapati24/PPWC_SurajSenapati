#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[]={10,13,20,33,44};
    int len_a=sizeof(a)/sizeof(a[0]);
    float b[]={10.2,13.3,20.0,33.3,45.3,89.9};
    int len_b=sizeof(b)/sizeof(b[0]);
    int i;
    for(i=0;i<len_a;i++){
        printf("For a[%d] Value is %d and address is %p\n",i,a[i],&a[i]);
    }
    for(i=0;i<len_b;i++){
        printf("For b[%d] Value is %.1f and address is %p\n",i,b[i],&b[i]);
    }
    return 0;
}