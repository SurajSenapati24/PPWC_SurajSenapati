#include <stdio.h>
int main(){
    float x=6.7,y=1.2,z=2.3;
    float *p=&x;
    printf("x: %.1f\n",*p);
    p=&y;
    printf("y: %.1f\n",*p);
    p=&z;
    printf("z: %.1f\n",*p);
    return 0;
}
