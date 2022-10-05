// HomeWork lab 4 task 18
// Mandrenko Olexandr
#include <stdio.h>
#include <math.h>

void task27(){
    float e, xk1 = 1, xk2 = 2, sq = 0, sum = 1, i = 1;

    printf("e = ");
    scanf("%f", &e);
    
    while (abs(xk1 - xk2) > e){
        sq = sqrt(2 + sq);
        xk2 = xk1;
        xk1 = sq / 2;
        sum *= xk1;
    }
    printf("2 / pi = %f", sum);
}

int main()
{
    task27();
}