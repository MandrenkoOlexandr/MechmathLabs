// HomeWork lab 2 task 8 a)
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

double Mediana(double a, double b, double c){
    return sqrt(2 * (a * a + b * b) - c * c) / 2;
}

int main()
{
    double a, b, c, Ma, Mb, Mc;
    
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    Ma = Mediana(b, c, a);
    Mb = Mediana(a, c, b);
    Mc = Mediana(a, b, c);

    printf("Mediana a = %lf\nMediana b = %lf\nMediana c = %lf", Ma, Mb, Mc);
}