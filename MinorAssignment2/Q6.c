#include <stdio.h>
int leap(int year){
    if((year%4==0 && year/100!=0)|| year%400==0){
        return 1;
    }
    else return 0;
}
int dayOfYear(int day, int month, int year){
    int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int day_no=0;
    if (leap(year)){
        daysinmonth[1]=29;
    }
    for(int i=0;i<month-1;i++){
        day_no+=daysinmonth[i];
    }
    day_no+=day;
    return day_no;
}
int main(){
    int day,month,year;
    printf("Enter date in (ddmmyyyy): \n");
    scanf("%d %d %d",&day,&month,&year);
    int daynum=dayOfYear(day,month,year);
    printf("Day Number: %d\n",daynum);
}