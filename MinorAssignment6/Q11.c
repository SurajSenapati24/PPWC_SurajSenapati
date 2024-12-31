#include<stdio.h>
int i=5;
int main(){
    extern int j;
    printf("\ni=%d \nj=%d",i,j);
    int j=10;
    return 0;
}
int j =10;

/*
Q11.c: In function 'main':
Q11.c:7:9: error: redefinition of 'j'
     int j=10;
         ^
Q11.c:3:5: note: previous definition of 'j' was here
 int j =10;
 */