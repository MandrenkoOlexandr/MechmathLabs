#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("a = ");
    scanf("%F", &a);
    printf("b = ");
    scanf("%F", &b);

    c = sqrt(a*a + b*b);

    printf("Гіпотенуза - %F", c);
}