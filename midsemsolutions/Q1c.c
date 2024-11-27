#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    printf("No of digits in the integer is : %d\n",count);
    return 0;
}