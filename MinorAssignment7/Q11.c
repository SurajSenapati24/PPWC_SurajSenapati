#include <stdio.h>
int main(){
    struct s1{
        char *z;
        int i;
        struct s1 *p;
};
    struct s1 a[]={{"SOA",1,a+1},
        {"ITER",2,a+2},
        {"CSE",3,a}
    };
    struct s1 *ptr=a;
    printf("%s\n", ++(ptr->z));
    printf("%s\n", a[(++ptr)->i].z);
    printf("%s\n",a[--(ptr->p->i)].z);
    printf("%d\n",--a[2].i);
    return 0;
}
/*Output:
OA
CSE
CSE
1

a[0]-->a[1]-->a[2]-->a[0]

printf("%s\n", ++(ptr->z));
ptr->z points to "SOA".
++(ptr->z) increments the pointer, so it now points to "OA".
Output: OA
2. printf("%s\n", a[(++ptr)->i].z);
++ptr moves ptr to a[1] (i.e., "ITER").
ptr->i is 2 (value of i in a[1]).
a[2].z points to "CSE".
Output: CSE
3. printf("%s\n", a[--(ptr->p->i)].z);
ptr->p points to a[2] (from a[1].p).
ptr->p->i is 3 (value of i in a[2]).
--(ptr->p->i) decrements a[2].i to 2.
a[2].z points to "CSE".
Output: CSE
4. printf("%d\n", --a[2].i);
a[2].i was decremented to 2 in the previous step.
--a[2].i decrements it again to 1.
Output: 1

*/