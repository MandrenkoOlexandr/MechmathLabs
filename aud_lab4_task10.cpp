// Auditor lab 4 task 10
// Mandrenko Olexandr

#include <stdio.h>

void task10(){
    float a = 1, k = 1, i = 0;

    while (1 + a != 1){
        a /= 2;
        k *= 2;
        i += 1;
    }
    printf("1 / %.0f or 1 / 2^%.0f = 0", k, i);
}

int main()
{
   task10(); 
}