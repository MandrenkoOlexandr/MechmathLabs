// Auditor lab 1 task 9
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;

    printf("a and b = ");
    scanf("%f %f", &a, &b);

    printf("Науково\nСер Арифмет - %e \nСер Гармон - %e\nДесятково\n %f\n %f", (a + b) / 2, 2 * a * b / (a + b), (a + b) / 2, 2 * a * b / (a + b));
}