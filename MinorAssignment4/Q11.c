#include<stdio.h>
int main(){
    int a[]={120,502,118,188,106,447};
    int len=sizeof(a)/sizeof(a[0]);
    int *ptr;
    ptr=&a[0];//as address of a and address of a[0] are same
    for(int i=0;i<len;i++){
        printf("a[%d]: %d\n",i,ptr[i]);
    }
    // Or
    // for(int i=0;i<len;i++){
    //     ptr=&a[i];
    //     printf("a[%d]: %d\n",i,*ptr);
    // }
    
    
}