// Auditor lab 3 task 2
// Mandrenko Olexandr

#include <stdio.h>

void permutation_digits(unsigned n){
    unsigned a = n % 10;
    unsigned b = (n / 10) % 10;
    unsigned c = n / 100;

    if (a == b || a == c || b == c){
        printf("digits is simple");
        return;
    }

    printf("all permutation:\n%u%u%u\n%u%u%u\n%u%u%u\n", c, b, a, c, a, b, a, c, b);
    printf("%u%u%u\n%u%u%u\n%u%u%u\n", a, b, c, b, a, c, b, c, a);
}

int main()
{
    unsigned n;

    printf("n = ");
    scanf("%u", &n);

    if ((n >= 1000) || (n < 100)){
        printf("The number %u is not 3-digit!", n);
        return false;
    }

    permutation_digits(n);
}