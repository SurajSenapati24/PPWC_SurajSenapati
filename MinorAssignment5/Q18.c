#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int *p=(int *)malloc(sizeof(int));
    *p=100;
    p=(int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        scanf("%d",p+i); /* 10,20,30,40,50 */
    }
    for(i=0;i<5;i++){
        printf("%d...%d\n",p[i],*(p+i));
    }
    return 0;
}
/*
Input: 10
20
30
40
50

Output: 
10...10
20...20
30...30
40...40
50...50

Explaination:
Memory Allocation (malloc):

malloc(sizeof(int)) allocates memory for one integer. *p = 100 stores 100 at that location.
Reallocation Issue: p = malloc(5 * sizeof(int)) allocates new memory for 5 integers, but the original memory (containing 100) is lost since p now points to the new block.
User Input:

The loop for(i=0; i<5; i++) stores 5 integers (e.g., 10, 20, 30, 40, 50) in the newly allocated block.
Dereferencing:

p[i] is equivalent to *(p + i). This prints each integer from the memory block.
*/