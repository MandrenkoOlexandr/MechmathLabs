#include <stdio.h>
#include <math.h>

int main()
{
    float C, F;

    printf("Введіть температуру в градусах Цельсія - ");
    scanf("%F", &C);

    F = ((9 * C) / 5) + 32;
    printf("F=%F", F);


}