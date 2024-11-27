#include<stdio.h>
int main(){
    int a=0x80ec;
    float b=0.3e-12;
    //printf(":%___: :%___:\n",a,b); to get output as::0X80EC: :3.00E-013:
    printf(":%#X: :%.2E:\n",a,b);
    return 0;
}