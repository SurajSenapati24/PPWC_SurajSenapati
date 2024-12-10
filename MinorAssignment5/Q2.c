#include<stdio.h>
int main(){
    int arr[4][5],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
             arr[i][j]=10*i+j;
        }
    }
    printf("%d\n",*(arr[1]+9));
    return 0;
}
//Output: 24
/*
addresses:      100  104 108 112 116  120  124  128  132   136  140  144  148  152   156  160  164   168  172   176
            arr={{0,  1,  2,  3,  4}, {10,  11,  12,  13,  14}, {20,  21,  22,  23,  24}, {30  ,31,  32,  33,   34}}
row indices:              0                       1                         2                         3
Now arr[1] means address of the 1st element in the 2nd row of arr i.e 120
now  arr[1]+9 it means 120+9xsizeof(int)=120 + 9x4 =120+36=156
*(156)=24
So, *(arr[1]+9) = 24 

*/