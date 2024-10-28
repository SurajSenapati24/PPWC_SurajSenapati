#include <stdio.h>
int main(){
    int x,zerocount=0,minussum=0,plussum=0,i;
    for(i=0;i<5;i++){
        printf("Enter the value of x: ");
        scanf("%d",&x);
        if(x==0) zerocount+=1;
        else if(x<0) minussum+=x;
        else plussum+=x;
    }
    printf("Zero count: %d\n",zerocount);
    printf("Sum of negative numbers: %d\n",minussum);
    printf("Sum of positive numbers: %d\n",plussum);
}