#include<stdio.h>
int returnMax(int a[],int size){
    int max=a[0];
    for(int i=1;i<size;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
int main(){
    int a[]={3,7,1,6,2,9};
    int size=sizeof(a)/sizeof(a[0]);
    int max=returnMax(a,size);
    printf("The maximum element in the array is: %d",max);
    return (0);
}
