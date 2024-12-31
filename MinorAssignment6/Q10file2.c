#include<stdio.h>
#include "Q10file1.c"
int count = 5;
int main(){
    write_extern();
    write_extern();
    printf("%d\n", count);
    return(0);
}
/*Output: 9

Explaination: the Q10file1.c is having the count as extern means Q10file2.c and Q10file.c
share this variable 
So when the function write_extern() is called 
then intially the count was 5
after function execution count is 7 
Then the function write_extern was called again 
after execution the value is 9 
So, output is 9
*/