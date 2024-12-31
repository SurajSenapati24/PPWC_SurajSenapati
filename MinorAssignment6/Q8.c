#include <stdio.h>
int funcp() {
    static int x = 1;
    x++;
    return x;
}
int main() {
    int x, y;
    x = funcp();              
    y = funcp() + x;          
    printf("%d\n", (x + y));  
    return 0;
}
/*
Output: 7

Explaination: 
under funcp x=1 only initialized once
x= funcp()
x = 2(in main function)
and in funcp() x=2

then y= funcp()  (x in funcp is 2)
So, y=3+x(in main function x=2)
y=5
printf("%d\n", (x + y)); 
2+5=7
So, it prints 7

*/