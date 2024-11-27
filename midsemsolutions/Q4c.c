#include<stdio.h>
void displayreversed(n){
	if(n==0) return;
	int digit=n%10;
	printf("%d",digit);
	displayreversed(n/10);
}

int main(){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	displayreversed(n);
	return 0;
}
