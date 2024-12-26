#include <stdio.h>
void fun(int arr[][3]){
    printf("%d\n",*(*(arr+2)+1));
    printf("%p\n",(*arr)+2);
    printf("%p\n",&arr[0][2]);
    printf("%d\n",*(((*arr)+1)+1));
}
int main(){
    int a[][3]={5,6,7,8,9,4,3,2,1};
    fun(a);
    return 0;
}
/*
Output:
2
0061FF04
0061FF04
7 

Explaination: 
printf("%d\n",*(*(arr+2)+1));
arr is a pointer to the first row of the 2D array.
arr + 2 points to the 3rd row (a[2] → {3, 2, 1}).
*(arr + 2) dereferences this to point to a[2].
*(arr + 2) + 1 points to the second element of a[2] (i.e., 2).
*(*(arr + 2) + 1) retrieves the value 2.

printf("%p\n",(*arr)+2);
*arr points to the first row a[0] ({5, 6, 7}).
(*arr) + 2 points to the address of the 3rd element (a[0][2]).

printf("%p\n",&arr[0][2]);
This directly accesses the address of a[0][2] (i.e., 7).

printf("%d\n",*(((*arr)+1)+1));
*arr points to the first row a[0] ({5, 6, 7}).
(*arr) + 1 points to 6 (a[0][1]).
((*arr) + 1) + 1 points to 7 (a[0][2]).
*((*arr) + 1 + 1) retrieves the value 7.
*/