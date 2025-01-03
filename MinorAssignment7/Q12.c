#include <stdio.h>
int main(){
    struct test{
        int i;
        char *c;
    };
    struct test st[]={5, "Cse-Engg",
        4, "computer",
        6, "Electrical",
        8, "Mechnical",
        7, "All-Engg"
    };
    struct test *p=st;
    printf("%s\n", ++(p++->c));
    printf("%c\n",*p++->c );
    printf("%d\n",++p->i);
    printf("%s\n",p[0].c);
    printf("%s\n",p->c);
    return 0;
}
/*Output:
se-Engg
c
7
Electrical
Electrical

1. printf("%s\n", ++(p++->c));
p++->c → p->c (initially points to "Cse-Engg").
++(p->c) → Increments the pointer to point to "se-Engg".
Then p++ increments p to point to st[1].
Output: se-Engg
2. printf("%c\n", *p++->c);
p points to st[1] ("computer").
p++->c accesses "computer", and p++ increments p to point to st[2].
*p->c → The first character of "computer" is c.
Output: c
3. printf("%d\n", ++p->i);
p now points to st[2] (6, "Electrical").
++p->i increments 6 to 7.
Output: 7
4. printf("%s\n", p[0].c);
p still points to st[2] ("Electrical").
p[0].c accesses the current structure's c member.
Output: Electrical
5. printf("%s\n", p->c);
p->c again points to "Electrical".
Output: Electrical*/