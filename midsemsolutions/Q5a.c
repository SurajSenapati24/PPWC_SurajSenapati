#include<stdio.h>
void sortwslag(int *a,int *b){
    if(*a>*b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
}
int main(){
    int a=4,b=2,c=1,d=5,e=9;
    sortwslag(&a,&b);
    sortwslag(&a,&c);
    sortwslag(&a,&d);
    sortwslag(&a,&e);
    sortwslag(&b,&c);
    sortwslag(&b,&d);
    sortwslag(&b,&e);
    sortwslag(&c,&d);
    sortwslag(&c,&e);
    sortwslag(&d,&e);
    int ar[]={a,b,c,d,e};
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }
    return 0;


}