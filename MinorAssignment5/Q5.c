#include <stdio.h>
    int main(){
    int a[][3]={4,5,6,7,8,9,1,2,3};
    printf("%d,", *a[2]);
    printf("%d,", a[2][0]);
    printf("%d ", **(a+1+('b'-'a')));
    return 0;
}
/*
Output:
1,1,1

Explanation:

First printf:
printf("%d,", *a[2]);
a[2] points to the first element of the third row, i.e., &a[2][0].
*a[2] dereferences a[2], which gives 1 (the value at a[2][0]).

Second printf:
printf("%d,", a[2][0]);
a[2][0] directly accesses the first element of the third row, which is 1.


Third printf:
printf("%d ", **(a+1+('b'-'a')));
('b' - 'a') evaluates to 1 (since the ASCII difference between 'b' and 'a' is 1).
a + 1 points to the second row (a[1]).
(a + 1 + 1) is a + 2, which points to the third row (a[2]).
*(a + 2) dereferences to the third row, i.e., a[2].
**(a + 2) dereferences a[2] to give 1 (value at a[2][0]).

*/