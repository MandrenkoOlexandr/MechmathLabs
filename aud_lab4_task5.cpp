// Auditor lab 4 task 5
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task5(){
    unsigned n;
    int i;
    float sum = 1;

    printf("n = ");
    scanf("%u", &n);
    i = n;
    while (i > 0){
        sum *= i;
        i -= 2;
    }
  printf("%lf\n", sum);
}

int main()
{
    task5();
}