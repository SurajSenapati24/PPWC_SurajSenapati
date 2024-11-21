#include <stdio.h>
int main(){
    float x=6.7,y=1.2,z=2.3;
    float a[]={x,y,z};    
    float *p=&a[0];
    printf("x: %.1f\n",p[0]);
    printf("y: %.1f\n",p[1]);
    printf("z: %.1f\n",p[2]);
    /*
    OR we can use
    printf("x: %.1f\n",*(p+0));
    printf("y: %.1f\n",*(p+1));
    printf("z: %.1f\n",*(p+2));
    */
    return 0;
}