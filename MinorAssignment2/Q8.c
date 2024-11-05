#include <stdio.h>
#include <math.h>
int main(){
    float x,term,sum=0.0;
    int i;
    printf("Enter the value of x: \n");
    scanf("%f",&x);
    if(x<=0){
        printf("x should be greater than 0\n");
        return 1;
    }
    for(i=1;i<=9;i++){
        term=pow((x-1)/x,i)/i;
        sum+=term;
    }
    printf("Approximation of ln(x) for the first 9 terms :%f\n",sum);
    return 0;
}