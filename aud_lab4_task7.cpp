// Auditor lab 4 task 7
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task7(){
    unsigned n, i;
    float sum = 1, x, subs, xi;

    printf("n = ");
    scanf("%u", &n);
    printf("|x| < 1: x = ");
    scanf("%f", &x);
    if (abs(x) >= 1){
        printf("Wrong! |x| > 1");
        return;
    }
    subs = x;
    for (i = 1; i <= n; i++){
        xi = x / i;
        subs *= xi;
        sum += subs;
    }
  printf("%f\n", sum);
}

int main()
{
    task7();
}