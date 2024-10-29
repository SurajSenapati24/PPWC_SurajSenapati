#include <stdio.h>
int main(){
    int n,new_n=0,place=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        int digit=n%10;
        if(digit==0) digit=1;
        else if(digit==1) digit=0;
        new_n+=digit*place;
        place*=10;
        n=n/10;
    }
    printf("The new number after replacing 0 and 1 is :%d",new_n);
    return 0;
}