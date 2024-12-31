#include<stdio.h>
int f(int n, int k){
    if(n==0) return 0;
    else if(n%2) return f(n/2, 2*k)+k;
    else return f(n/2, 2*k)-k;
}
int main(){
    printf( "%d",f(20,1));
    return 0;
}
/*Output: 
9

Explaination: 
Tracing the Function Call:

f(20, 1) – 20 is even → f(10, 2) - 1
f(10, 2) – 10 is even → f(5, 4) - 2
f(5, 4) – 5 is odd → f(2, 8) + 4
f(2, 8) – 2 is even → f(1, 16) - 8
f(1, 16) – 1 is odd → f(0, 32) + 16
f(0, 32) – Base case → returns 0

Backtracking (Returning Results):

f(0, 32) = 0
f(1, 16) = 0 + 16 = 16
f(2, 8) = 16 - 8 = 8
f(5, 4) = 8 + 4 = 12
f(10, 2) = 12 - 2 = 10
f(20, 1) = 10 - 1 = 9

*/