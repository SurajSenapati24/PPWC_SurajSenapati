#include <stdio.h>
int main(){
    int la=345;
    float Fb=4.5;
    char Chvar='Z';
    printf("la: %d\n",la);
    printf("Address of la: %p\n",&la);
    printf("Fb: %f\n",Fb);
    printf("Address of Fb: %p\n",&Fb);
    printf("Chvar: %c\n",Chvar);
    printf("Address of Chvar: %p\n",&Chvar);
    return 0;
}