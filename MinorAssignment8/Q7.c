#include<stdio.h>
#include<unistd.h>
int main()
{
    fork();
    fork()||fork();
    fork();
    printf("Really!!!\n");
    return 0;
}
/*
Output:
Really!!!
Really!!!
Really!!!
Really!!!
Really!!!
Really!!!
Really!!!
Really!!!
Really!!!
Really!!!
Really!!!
Really!!!
*/