// Auditor lab 5 task 1
// Mandrenko Olexandr

#include <stdio.h>

void task1()
{
    float a, number = 1, n = 1;

    printf("a = ");
    scanf("%f", &a);

    while (number < a){
        n += 1;
        number += 1 / n;
    }

    printf("Num %.4f > %.4f, n = %.0f", number, a, n);
}

int main()
{
    task1();
}