#include <stdio.h>
int main(){
    static int i=5;
    if(--i){
        main();
        printf("%d ",i);
    }
return 0;
}

/*
Ouput : 0 0 0 0

Explaination:
How the Code Works:
static int i = 5;
The variable i is declared as static, meaning it retains its value between function calls and is initialized only once.
if (--i)
--i decrements i before the condition is evaluated. If i is greater than 0 after decrement, the condition evaluates to true.
main();
This causes recursion. The function main calls itself until i becomes 0.
printf("%d ", i);
This printf is executed after the recursive call returns (post-order). As recursion unwinds, the value of i is printed.
Execution Breakdown (Step by Step):
Initial i = 5.
--i → i = 4, recursive call.
--i → i = 3, recursive call.
--i → i = 2, recursive call.
--i → i = 1, recursive call.
--i → i = 0, condition fails, recursion stops.
Now, as recursion unwinds:
printf("%d ", 0);
printf("%d ", 0);
printf("%d ", 0);
printf("%d ", 0);
*/