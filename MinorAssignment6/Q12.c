#include <stdio.h>
//Write a program to find the sum of an array elements using recursion.
int sumOfArray(int arr[],int size){
    if(size<=0){
        return 0;
    }
    else{
        return arr[size-1]+sumOfArray(arr,size-1);
    }
}
int main(){
    int arr[]={4,3,7,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The sum of the array is: %d \n",sumOfArray(arr,size));
    return 0;
}