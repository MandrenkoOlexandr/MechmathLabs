// Auditor lab 5 task 2
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

unsigned long long Fib(unsigned n){
    unsigned long long F0 = 0L, F1 = 1UL, F = 1UL;
    int i;
    if (n == 0) return 0;
    if (n == 1) return 1;

    for(i = 1; i <= n; i++){
        F = F0 + F1;
        F0 = F1;
        F1 = F;
    }

    return F;
}

void Fiba(unsigned a){
    unsigned long long F0 = 0L, F1 = 1UL, F = 1UL;
    
    while (F <= a){
        F = F0 + F1;
        F0 = F1;
        F1 = F;
    }
    printf("%u <= a < %u\n", F0, F1);    
}

void SumofFib(){
    unsigned long long F0 = 0L, F1 = 1UL, F = 1UL, s = 1;
    while (s <= 1000){
        F = F0 + F1;
        F0 = F1;
        F1 = F;
        s += F;
    }   

    printf("%u <= 1000", s-F);
}

int main()
{
    unsigned n, a;

    printf("n = ");
    scanf("%u", &n);
    printf("a = ");
    scanf("%u", &a);

    printf("F(%u) = %Lu\n", n, Fib(n));
    Fiba(a);
    SumofFib();
}