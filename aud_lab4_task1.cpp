// Auditor lab 4 task 1
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task1(){
    unsigned i, n;
    float x, y;

    printf("x = ");
    scanf("%f", &x);
    printf("n = ");
    scanf("%u", &n);

    y = x;

    for(i = 0; i < n; i++){
        y = sin(y);
    }

    printf("y = %f", y);
}
int main()
{
    task1();
}