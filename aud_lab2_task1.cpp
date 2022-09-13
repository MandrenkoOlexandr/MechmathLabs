#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("x = ");
    scanf("%F", &x);

    float y = cosh(x);

    printf("ch(%F)=%F\n", x, y);
}