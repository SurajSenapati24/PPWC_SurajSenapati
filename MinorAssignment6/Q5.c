#include<stdio.h>
void f(int n) {
    if (n <= 1) {
        printf("%d", n);
    } else {
        f(n / 2);
        printf("%d", n % 2);
    }
}
int main() {
    f(173);
    return 0;
}
/*
Output: 10101101


Explaination: 
1st call: f(173) => Calls f(173/2)=> f(86)
2nd call: f(86) => Calls f(86/2)=> f(43)
3rd call: f(43) => Calls f(43/2) => f(21)
4th call: f(21) => Calls f(10)
5th Call: f(10) => Calls f(5)
6th Call: f(5) => Calls f(2)
7th Call: f(2)=> Calls f(1)

BackTrackiing:
f(1): prints 1
f(2): prints 0
f(5): prints 1
f(10): prints 0
f(21): prints 1
f(43): prints 1
f(86): prints 0
f(173): prints 1
*/
