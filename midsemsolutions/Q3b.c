#include<stdio.h>
#include<string.h>
int main(){
    char s[]={'S','O','A','D','U','\0'};
    int size=strlen(s);
    int j=0;
    for(int i=size-1;i>j;i--){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j++;
    }
    printf("%s",s);
    return 0;
}