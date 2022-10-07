// Auditor lab 5 task 4
// Mandrenko Olexandr

#include <stdio.h>

void a(){
    float P = 1, F = 1;
    unsigned i, n;

    printf("A) n = ");
    scanf("%u", &n);

    for(i = 1; i <= n; i++){
        F *= i;
        P *= (1 + 1 / F); 
    }

    printf("P = %f\n", P);
}
void b(){
    float P = 1, Power2 = 1, Power1 = -1;
    unsigned i, n;

    printf("B) n = ");
    scanf("%u", &n);

    for(i = 1; i <= n; i++){
        Power2 *= 2;
        Power1 *= -1;
        P *= (1 + Power1 * i * i / Power2); 
    }

    printf("P = %f", P);
}

int main(){
    a();
    b();
}