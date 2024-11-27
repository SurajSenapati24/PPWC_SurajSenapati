#include <stdio.h>
int findMaxLinear(int arr[], int n,int max) {
    if (n == 0) {
        return max;
    }
    if (arr[n - 1] > max) {
        max = arr[n - 1];
    }
    return findMaxLinear(arr, n - 1,max);
}
int main(){
    int a[]={4,5,3,2,7,9};
    int size=sizeof(a)/sizeof(a[0]);
    int max=findMaxLinear(a,size,a[0]);
    printf("Maximum element is: %d",max);
    return 0;
}