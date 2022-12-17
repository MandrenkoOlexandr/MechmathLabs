// HomeWork lab 2 task 8 a)
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cmath>


double f(double x){
    double e =  2.71828;
    return (pow(e, x) - pow(e, -x)) / (pow(e, x) + pow(e, -x));
}

int main()
{
    double x, gx, h = 0.0001;

    printf("x = ");
    scanf("%lf", &x);

    gx = (f(x + h) - f(x - h)) / (2 * h);
    printf("g(x) = %lf", gx);
}