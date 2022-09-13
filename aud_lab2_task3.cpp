// Auditor lab 2 task 3
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

double heron(double a, double b, double c){
        return sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
    }

int main()
{
    double a, b, c;

    printf("a = ");
    scanf("%lF", &a);

    printf("b = ");
    scanf("%lF", &b);

    printf("c = ");
    scanf("%lF", &c);

    printf("Triangle Area = %lF", heron(a, b, c));
}