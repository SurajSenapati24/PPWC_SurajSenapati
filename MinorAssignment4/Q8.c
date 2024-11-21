#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[]={0,10,20,30,40,50,60,70,80,90};
    int len=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        printf("Address of a[%d] is %u\n",i,&a[i]);
    }
    return 0;
}