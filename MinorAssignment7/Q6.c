#include <stdio.h>
struct person {
    int ht;
    float wt;
    char color;
    struct person p;  /* Line-5 */
};
/*The given declaration is invalid due to line 5
Reason:
Line-5 causes a recursive definition where the structure person contains an instance of itself (struct person p;).
This results in an infinite size issue because the structure person would continuously try to nest itself within, leading to undefined behavior.*/