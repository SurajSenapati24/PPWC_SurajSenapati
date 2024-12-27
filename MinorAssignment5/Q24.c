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