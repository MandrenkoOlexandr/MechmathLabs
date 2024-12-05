// Auditor lab 1 task 2
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

int main()
{
    float afloat = 0.0001, cfloat = 3.14, dfloat = sqrt(5);
    double bdouble = 24.33e5, elong = log(100);

    printf("%.2f, %.2lf, %.2f, %.2f, %lf", afloat, bdouble, cfloat, dfloat, elong);
}