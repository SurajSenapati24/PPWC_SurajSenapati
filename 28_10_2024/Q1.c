#include <stdio.h>
#include <stdbool.h>
int main(){
    int item;
    int product=1;
    bool s=true;
    while (s)
    {
        printf("Enter the item: ");
        scanf("%d",&item);
        if(item!=0){
            product=product*item;
        }
        else{
            s=false;
        }
    }
    printf("The value of product is: %d",product);
}