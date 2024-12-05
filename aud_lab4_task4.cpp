// Auditor lab 4 task 4
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task4(){
    unsigned i, n;
    float x, sum = 0, power = 1;

    printf("x = ");
    scanf("%f", &x);
    printf("n = ");
    scanf("%u", &n);
    
    for(i = 1; i <= n; i++){
      power *= x;
      sum += i * power;
    }
  printf("%lf\n", sum);
}

int main()
{
    task4();
}