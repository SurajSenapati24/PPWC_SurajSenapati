#include <stdio.h>
int main(){
    int a=52;
    int b=18;
    int *ptr1=&a;
    int *ptr2=&b;
    if(*ptr1>*ptr2){
        printf("a is greater\n");
    }
    //For user input case
    // else if(*ptr1<*ptr2){
    //     printf("b is greater.\n");
    // }
    else{
        printf("b is greater.\n");
        //For user input case
        //printf("Both are Equal.\n");
    }
    return 0;
}