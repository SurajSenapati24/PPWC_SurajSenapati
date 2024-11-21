#include <stdio.h>
int main(){
    char desired;
    float ca,ra,fw,scoreneeded;
    printf("Enter desired grade>\n");
    scanf("%c",&desired);
    printf("Enter the current average: \n");
    scanf("%f",&ca);
    printf("Enter Required average: \n");
    scanf("%f",&ra);
    printf("Enter how much the final counts\n as a percentage of the course grade>\n");
    scanf("%f",&fw);
    scoreneeded=(ra-ca*(1-fw/100))/(fw/100);
    printf("Score needed: %f\n",scoreneeded);
}