#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
int main() 
{ 
    int pid; 
    for (int i = 0; i < 3; i++) { 
        if (fork()==0) {  
            printf("Parent process ID is %d\n", 
                   getpid()); 
            break; 
        } 
        else { 
            printf("Child process ID is %d\n", 
                   getpid()); 
        } 
    } 
    return 0; 
}