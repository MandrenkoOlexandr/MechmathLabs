// Auditor lab 2 task 6
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

double length(double x1, double x2, double y1, double y2){
    return sqrt((y1 - x1) * (y1 - x1) + (y2 - x2) * (y2 - x2));
}

double heron(double a, double b, double c){
        return sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
    }

int main()
{
    double A, B, C, a1, b1, c1, a2, b2, c2;

    printf("A = ");
    scanf("%lF %lF", &a1, &a2);

    printf("B = ");
    scanf("%lF %lF", &b1, &b2);

    printf("C = ");
    scanf("%lF %lF", &c1, &c2);

    A = length(c1, c2, b1, b2);
    B = length(a1, a2, c1, c2);
    C = length(a1, a2, b1, b2);

    printf("Triangle Area = %lF", heron(A, B, C));
}