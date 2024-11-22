#include <stdio.h>

void sum_n_avg(double a, double b, double c, double *sum, double *avg)
{
    *sum = a + b + c;
    *avg = *sum / 3.0;
}

void main()
{
    double one, two, three, sum_of_3, avg_of_3;
    printf("Enter three numbers> ");
    scanf("%lf %lf %lf", &one, &two, &three);
    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);

    printf("Sum: %.2f\n", sum_of_3);
    printf("Average: %.2f\n", avg_of_3);
}
