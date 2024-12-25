#include <stdio.h>
int main(){
    int a[][2][4]={5,6,7,8,9,11,12,1};
    printf("%d\n",*(*(*(a+0)+1)+2));
    return 0;
}
/*output: 
12
Explanation:
a + 0 → Points to the first 2D array a[0].
*(a + 0) → Dereferences to get a[0] (the first 2D array).
*(a[0] + 1) → Points to a[0][1] (the second row of the first 2D array).
*(a[0][1] + 2) → Points to the third element of a[0][1].
Final Calculation:
a[0][1] = { 9, 11, 12, 1 }
a[0][1][2] = 12
*/