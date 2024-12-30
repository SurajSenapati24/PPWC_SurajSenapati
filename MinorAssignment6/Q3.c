#include <stdio.h>
int a, b, c = 0;
void prtFun(void);
int main(){ 
    auto int a = 1; /* Line 1 */
    prtFun( );
    a+=1;
    prtFun( );
    printf("\n %d %d ", a, b);
    return(0);
}
void prtFun(void){ 
    register int a = 2; /* Line 2 */
    int b = 1;
    a += ++b;
    printf(" \n %d %d ", a, b);
}
/*
Output: 
4 2
4 2
2 0

Explaination: 
Global Initialization:

a = 0, b = 0, c = 0 (global).
main Execution:

auto int a = 1; → a in main is initialized to 1.
First Call to prtFun():

register int a = 2; → Local a is initialized to 2 for this function call only.
int b = 1; → b is initialized to 1.
++b → b = 2.
a += b; → a = 4.
Prints: 4 2.
After the function returns, a in prtFun ceases to exist.
Back to main:

a += 1; → a (in main) = 2.
Second Call to prtFun():

register int a = 2; (reinitialized).
int b = 1; (reinitialized).
++b → b = 2.
a += b; → a = 4.
Prints: 4 2.
Final Print in main():

printf("\n %d %d ", a, b);
a (in main) = 2, b (global) = 0 (unchanged by prtFun).
*/