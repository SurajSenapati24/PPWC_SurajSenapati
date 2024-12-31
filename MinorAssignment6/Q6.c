#include <stdio.h>
int f(int n){
    static int i = 1 ;
    if (n >=5) return n;
    n = n+1;
    i++;
    return f(n);
}
int main(){
    printf("%d\n",f(1));
    return 0;
}
/*The value returned by f(1) is
 (A) 5 (B) 6 (C) 7 (D) 8
 
Correct Answer is : (A) 5
*/