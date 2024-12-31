#include <stdio.h>
void print_fibo(int n, int first, int second) {
    if (n == 0) {
        return;  
    }
    printf("%d ", first); 
    print_fibo(n - 1, second, first + second); 
}
int main(){
    int n;
    printf("Enter the n for fibonacci series: \n");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    print_fibo(n,0,1); // to print elements
}