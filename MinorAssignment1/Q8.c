#include <stdio.h>
int main(){
    float speed,dis_m;
    printf("Enter the takeoff speed in Km/hr: \n");
    scanf("%f",&speed);
    printf("Enter the distance in meters: \n");
    scanf("%f",&dis_m);
    float vel=speed*(5.0/18.0);
    float t=(2*dis_m)/vel;
    float acc=vel/t;
    printf("Acceleration: %.2f\n",acc);
    printf("Time in seconds: %.2f",t);
    return 0;
}