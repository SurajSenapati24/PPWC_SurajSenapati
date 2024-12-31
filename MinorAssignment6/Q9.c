#include<stdio.h>
int main(){
    register int a =10;
    int *ptr = NULL;
    ptr = &a;
    *ptr = 5;
    printf("%d",*ptr);
    return(0);
}
/*
Q9.c: In function 'main':
Q9.c:5:2: error: address of register variable 'a' requested
  ptr = &a;
  ^~~
*/