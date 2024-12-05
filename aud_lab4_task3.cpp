// Auditor lab 4 task 3
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task3a(){
    unsigned i, n;
    float x, sum = 1, power = 1;

    printf("x = ");
    scanf("%f", &x);
    printf("n = ");
    scanf("%u", &n);

    for(i = 0; i < n; i++){
      power *= x;
      sum += power;
    }
  printf("%lf\n", sum);
}
void task3b(){
    unsigned i, n;
    float x, y, sum = 1, power = 1, sqpower = 1;

    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    printf("n = ");
    scanf("%u", &n);

    sqpower = x;
    power = 1;

    for(i = 0; i < n; i++){
      power *= y;
      sqpower *= sqpower;
      sum += power * sqpower;
    }
  printf("%lf", sum);
}

int main()
{
    task3a();
    task3b();
}
