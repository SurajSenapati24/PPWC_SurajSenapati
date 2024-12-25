#include <stdio.h>
int main(){
    int a[3][3]={4,5,6,7,8,9,1,2,3};
    printf("%p %p %p\n",a[1]+2,*(a+1)+2,&a[1][2]);
    printf("%d %d %d\n",*(a[1]+2),*(*(a+1)+2), a[1][2]);
    return 0;
}
/*
Output: 
0061FF10 0061FF10 0061FF10
9 9 9

First printf:

c
Copy code
printf("%p %p %p\n", a[1]+2, *(a+1)+2, &a[1][2]);
a[1] points to the second row: {7, 8, 9}.
a[1] + 2 points to the third element of the second row, i.e., &a[1][2].
*(a + 1) dereferences to a[1].
*(a + 1) + 2 points to the third element of the second row, i.e., &a[1][2].
&a[1][2] directly gives the address of the third element of the second row.
All three expressions point to the same memory location:
a[1] + 2 == *(a + 1) + 2 == &a[1][2]

Second printf:
printf("%d %d %d\n", *(a[1]+2), *(*(a+1)+2), a[1][2]);
a[1][2] is 9 (the third element of the second row).
*(a[1] + 2) also points to 9.
*(*(a + 1) + 2) dereferences to the third element of the second row, which is 9.
All three expressions evaluate to the same value:
*(a[1] + 2) == *(*(a + 1) + 2) == a[1][2] == 9
*/