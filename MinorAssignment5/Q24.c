#include<stdio.h>
 int main(){
 void demo();
 void (*fun)();
 fun=demo;
 (*)fun();
 fun();
 return 0;
 }
 
#include<stdio.h>
 void demo(){
 printf("SS");
 }
/*Output
Q24.c: In function 'main':
Q24.c:6:4: error: expected expression before ')' token
  (*)fun();
    ^
 */