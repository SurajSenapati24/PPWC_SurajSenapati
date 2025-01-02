#include <stdio.h>
struct person{
    int a;
    struct health{
        int a;
    }h;
};
int main() {
    struct person p;
    
    // Assign values to the members of the structure
    p.a = 30;
    p.h.a = 75;

    // Print the values to verify
    printf("Person a: %d\n", p.a);
    printf("Health a: %d\n", p.h.a);

    return 0;
}
/*Person a: 30
Health a: 75*/