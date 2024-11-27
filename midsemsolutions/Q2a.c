#include <stdio.h>

void f1(int n){
	if (n==0) return;
	printf("%d ",n);
	f2(n-2);
	printf("%d ",n);
}
void f2(int n){
	if (n==0) return;
	printf("%d ",n);
	f1(++n);
	printf("%d ",n);
}
int main(){
	f1(15);
	return 0;
}
/*Output: 
15 13 14 12 13 11 12 10 11 9 10 8 9 7 8 6 7 5 6 4 5 3 4 2 3 1 2 
2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 11 11 12 12 13 13 14 14 15 
*/