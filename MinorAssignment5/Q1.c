#include<stdio.h>
int main(){
    int arr[4][5],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            arr[i][j]=10*i+j;
        }
    }
    printf("%d\n",arr[2][4]);
    printf("%d\n",*(*(arr+2)+4));
    return 0;}

//Output: 24
//        24

/*Explaination: 
arr is an integer 2-D array with 4 rows and 5 columns:
when i=0, and j=0 arr[0][0]=10*0+0=0. So arr[0][0]=0
when i=0, and j=1 arr[0][1]=10*0+1=1. So arr[0][1]=1
when i=0, and j=2 arr[0][2]=10*0+2=0. So arr[0][2]=2
similarly arr[0][3]=3, arr[0][4]=4

when i=1 and j=0 arr[1][0]=10*1+0=10
Similarly arr[1][1]=11, arr[1][2]=12, arr[1][3]=13, arr[1][4]=14.

when i=2 and j=0 arr[2][0]=10*2+0=20
Similarly arr[2][1]=21, arr[2][2]=22, arr[2][3]=23, arr[2][4]=24.

when i=3 and j=0 arr[3][0]=10*3+0=30
Similarly arr[3][1]=31, arr[3][2]=32, arr[3][3]=33, arr[3][4]=14.

So arr={{0,1,2,3,4},
        {10,11,12,13,14},
        {20,21,22,23,24},
        {30,31,32,33,34}}

Now, arr[2][4] means i=2 and j=4 which means 3rd row 5th element which is 24. So, arr[2][4]=24 
*(*(arr+2)+4), arr holds the base address of the array arr+2 means 1st column + 2 it means that 3rd column 
now *(address of 3 column)= address of 1st element in 3rd row

Now *(address of 1st element in 3rd row + 4)= Address of 5th elemnt in the 3rd row
*(Address of 5th elemnt in the 3rd row)=24

*/