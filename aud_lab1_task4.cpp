// Auditor lab 1 task 4
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

int main()
{
    double F, m1, m2, r, y;

    y = 6.673 * 10e-11;
    
    printf("m1 = ");
    scanf("%lf", &m1);
    printf("m2 = ");
    scanf("%lf", &m2);
    printf("r = ");
    scanf("%lf", &r);

    F = y * ((m1 * m2) / (r * r));
    printf("F = %e", F);
}