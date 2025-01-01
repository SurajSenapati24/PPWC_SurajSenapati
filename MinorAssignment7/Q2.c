#include <stdio.h>
struct date{
    int m,d,y;
};
struct stud{
    char name[20];
        struct stud *p;
    struct date *d;
    int (*)fun(int, int); //Invalid member
};
/*int (*)fun(int, int);
is attempting to declare a function pointer but is syntactically incorrect because:
It lacks a name for the function pointer.

Q2.c:9:11: error: expected identifier or '(' before ')' token
     int (*)fun(int, int);
           ^
Q2.c:10:1: warning: no semicolon at end of struct or union
 };
 ^*/