// Auditor lab 4 task 8
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task8(){
    unsigned k = 0, m, s = 1;

    printf("m = ");
    scanf("%u", &m);
    if (m < 1){
        printf("Wrong! m < 1");
    }
    
    while (m >= s){
        s *= 4;
        k += 1;
    }
    k -= 1;
    printf("k = %u", k);
}

int main()
{
    task8();
}