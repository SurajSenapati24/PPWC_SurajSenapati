#include <stdio.h>
void main()
{
    int arr[5] = {332, 441, 515, 696, 77};
    int *ptr = arr;
    int max = ptr[0];
    for (int i = 0; i < 5; i++)
    {
        if (ptr[i] > max)
            max = ptr[i];
    }
    printf("Max: %d\n", max);
}