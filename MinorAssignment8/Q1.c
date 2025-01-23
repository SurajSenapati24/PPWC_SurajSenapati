#include<stdio.h>
#include<unistd.h>
int main(){
    fork();
    fork();
    fork();
    printf("ITER\n");
    printf("ITER\n");
    return 0;
}
/*Number of processes created=2^n where n is the number of fork()
Here 8 processes are created 1 parent and 7 childs
Output:
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER
ITER*/