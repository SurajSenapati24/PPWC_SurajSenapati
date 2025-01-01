#include <stdio.h>
struct oswcourse {
    int secid;
    float avgm;
    char present;
    int *marks();       // This is still invalid unless you specify parameters
    int teacher();      // This is still invalid unless you specify parameters
} o1, o2;
/*
Q1.c:6:10: error: field 'marks' declared as a function
     int *marks();       // This is still invalid unless you specify parameters
          ^~~~~
Q1.c:7:9: error: field 'teacher' declared as a function
     int teacher();      // This is still invalid unless you specify parameters
         ^~~~~~~
*/
