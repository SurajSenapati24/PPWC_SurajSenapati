#include<stdio.h>
#include<unistd.h>
 int main()
 {
 fork();
 fork() + fork();
 fork();
 printf("doing!!!\n");
 return 0;
 }
 /*Output: 
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 doing!
 */