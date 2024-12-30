#include <stdio.h>
int a, b, c = 0;
void prtFun(void);
int main(){
    static int a = 1; /* Line 1 */
    prtFun( );
    a+=1;
    prtFun( );
    printf("\n %d %d ", a, b);
    return(0);
}
void prtFun(void){
    static int a = 2; /* Line 2 */
    int b = 1;
    a += ++b;
    printf(" \n %d %d ", a, b);
}
/*Output: 
4 2
6 2
2 0

Key Points to Understand:
Global and Static Variables:

int a, b, c = 0; → a, b, and c are global variables initialized to 0 by default.
Static variables (static int a = 1; in main and static int a = 2; in prtFun) retain their values between function calls and are initialized only once.
Scope of a and b:

static int a in main and static int a in prtFun are local to their functions. They shadow the global variable a.
int b in prtFun is a local variable, reinitialized to 1 on each call.
Execution Breakdown (Step by Step):
Global Variable Initialization:

a = 0, b = 0, c = 0 (global).
First Call to prtFun():

static int a = 2 (initialized once).
b = 1 (local, initialized each time).
++b → b = 2.
a += b → a = 4.
Prints: 4 2
Return to main:

a += 1 → a (in main) = 2.
Second Call to prtFun():

b = 1 (local, reinitialized).
++b → b = 2.
a (static) += b → a = 6.
Prints: 6 2
Final Print in main():

a (in main) = 2, b (global) = 0.
Prints: 2 0*/