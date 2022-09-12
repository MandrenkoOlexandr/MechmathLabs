#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("x = ");
    scanf("%F", &x);

    float x2 = x * x, x3 = x2 * x, x4 = x2 * x2, x5 = x3 * x2, x6 = x3 * x3, x8 = x4 * x4, x9 = x6 * x3, x12 = x8 * x4, x15 = x9 * x6, x16 = x8 * x8, x28 = x16 * x12, x32 = x16 * x16, x64 = x32 * x32;
    printf("a: %F \n b: %F \n c: %F \n d: %F \n e: %F \n f: %F \n", x4, x6, x9, x15, x28, x64);
}
