#include<stdio.h>
int r(){
    static int num=7;
    return num--;
}
int main()  {
    for(r();r();r())
    printf("%d ", r());
    return 0;
}
/*Output:
5 2
 
Step-by-Step Breakdown:
First Call (Initialization - for(r(); ...; ...)):
r() is called.
num = 7 initially.
r() returns 7 (but this value is ignored).
num is decremented to 6.
Condition Check (for(...; r(); ...)):
r() is called.
num = 6.
r() returns 6.
num is decremented to 5.
Since 6 != 0, the loop enters the body.
Loop Body (printf("%d ", r())):
r() is called.
num = 5.
r() returns 5.
num is decremented to 4.
Prints: 5.
Iteration Step (for(...; ...; r())):
r() is called.
num = 4.
r() returns 4 (but this value is ignored).
num is decremented to 3.
Condition Check (Second Iteration):
r() is called.
num = 3.
r() returns 3.
num is decremented to 2.
Since 3 != 0, the loop continues.
Loop Body:
r() is called.
num = 2.
r() returns 2.
num is decremented to 1.
Prints: 2.
Iteration Step:
r() is called.
num = 1.
r() returns 1 (ignored).
num is decremented to 0.
Condition Check (Third Iteration):
r() is called.
num = 0.
r() returns 0.
Since 0 == 0, the loop terminates.
*/