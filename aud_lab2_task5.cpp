// Auditor lab 2 task 5
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

double Rosenbrock2d(double x, double y){
    return 100 * ((x * x - y) * (x * x - y)) + (x - 1) * (x - 1);
}

int main()
{
    double x, y;

    printf("x = ");
    scanf("%lF", &x);

    printf("y = ");
    scanf("%lF", &y);

    printf("Result = %lF", Rosenbrock2d(x, y));
}