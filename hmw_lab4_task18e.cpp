// HomeWork lab 4 task 18
// Mandrenko Olexandr

#include <stdio.h>

void task18(){
    unsigned k, i;
    float x, factor = 1, power = 1;

    printf("x = ");
    scanf("%f", &x);
    printf("k = ");
    scanf("%u", &k);

    for (i = 1; i <= k; i++){
        power *= -1 * x * x;
        factor *= i * (k + i);
    }
    printf("%f", power/factor);
}

int main()
{
    task18();
}