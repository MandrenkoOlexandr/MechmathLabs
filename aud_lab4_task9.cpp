// Auditor lab 4 task 9
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task9(){
    unsigned n, s = 1;

    printf("n = ");
    scanf("%u", &n);
    
    while (n >= s){
        s *= 2;
    }
    printf("n < 2^r = %u", s);
}

int main()
{
    task9();
}