#include <stdio.h>

void main()
{
    int a, b, c, d;
    int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c, *ptr4 = &d;
    *ptr1 = 55;
    *ptr2 = 105;
    *ptr3 = 89;
    *ptr4 = 68;
    int *arr[4] = {ptr1, ptr2, ptr3, ptr4};
    int max = *arr[0]; 
    for (int i = 1; i < 4; i++){ 
        if (*arr[i] > max) 
            max = *arr[i];
    }
    printf("Max: %d\n", max);
}