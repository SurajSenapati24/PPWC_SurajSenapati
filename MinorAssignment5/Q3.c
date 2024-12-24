#include<stdio.h>
int main(){
    int a[4][5]={{1,2,3,4,5},
                 {6,7,8,9,10},
                 {11,12,13,14,15},
                 {16,17,18,19,20}};
    printf("%d\n",**a);
    printf("%d\n",**a+2);
    printf("%d\n",*(a+**a+2));
    printf("%d\n",(*(a+**a+2)+3));
    printf("%d\n",*(*(a+**a+2)+3));

    return 0;
}
//Output: 19
/*
**a=**(start address of row 0 in a)=> *(address of 1st element in row 0 in a)=>1
**a+2=1+2=3
*(a+**a+2)=*(start address of row 0 in a + 1 + 2)=>*(address of 3rd row in a)=> address of first element in row 3
*(*(a+**a+2)+3)=>*(address of first element in 3rd row + 3)=*(address of 4th element in 3rd row)=19
*/