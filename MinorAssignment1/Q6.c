#include <stdio.h>
int main(){
    float user;
    printf("Enter the Distance in meters: \n");
    scanf("%f",&user);
    float km=user/1000,cm=user*100,mm=user*1000,f=user*3.28084,i=user*39.3701;
    printf("+--------------------+--------------------+\n");
    printf("| Unit               | Value              |\n");
    printf("+--------------------+--------------------+\n");
    printf("| Meters             |        %10.2f  |\n",user);
    printf("| KiloMeters         |        %10.2f  |\n",km);
    printf("| CentiMeters        |        %10.2f  |\n",cm);
    printf("| MilliMeters        |        %10.2f  |\n",mm);
    printf("| Feets              |        %10.2f  |\n",f);
    printf("| Inches             |        %10.2f  |\n",i);
    printf("+--------------------+--------------------+\n");
    return 0;

}