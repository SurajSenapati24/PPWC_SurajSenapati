#include <stdio.h>
void main(){
    int a[4]={1,2,3,4};
    int b[4]={5,6,7,8};
    int c[4]={9,10,11,12};
    int d[4]={13,14,15,16};
    int sumarray[4];
    int *p1=a,*p2=b,*p3=c,*p4=d,*sp=sumarray;
    for(int i=0;i<4;i++){
        sp[i]=a[i]+b[i]+c[i]+d[i];
    }
    for(int i=0;i<4;i++){
        printf("sumarray[%d]: %d\n",i,sp[i]);
    }
}