#include<stdio.h>
#include<unistd.h>
int main(){
    printf("A");
    fflush(stdout);
    fork();
    printf("P\n");
    return 0;
}