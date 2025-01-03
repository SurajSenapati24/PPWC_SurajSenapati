#include <stdio.h>
    struct person{
    int a;
    union health{
        int w;
    }h;
};
int main() {
    struct person p;
    p.a = 25;
    p.h.w = 70;

    printf("Person a: %d\n", p.a);
    printf("Health w: %d\n", p.h.w);

    return 0;
}
/*The Declaration is correct*/