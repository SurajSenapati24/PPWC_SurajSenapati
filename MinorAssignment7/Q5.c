#include <stdio.h>

union person {
    int a;
    struct health {
        int e;
    } h;
};

int main() {
    union person p;
    p.a = 10;
    printf("p.a = %d\n", p.a);
    
    p.h.e = 20;
    printf("p.h.e = %d\n", p.h.e);
    
    return 0;
}
/*The declaration is correct
The memory allocated for the union will be the size of the largest member (either int or struct health).
You can use either p.a or p.h.e, but modifying one will overwrite the other since unions share memory between members.*/