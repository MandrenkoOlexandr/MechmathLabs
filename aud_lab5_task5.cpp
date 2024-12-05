// Auditor lab 5 task 5
// Mandrenko Olexandr

#include <stdio.h>

void task5(){
    int x1 = -99, x2 = -99, x3 = -99, x = -1, n = 3;

    while (x < 0){
        x = x3 + x1 + 100;
        x1 = x2;
        x2 = x3;
        x3 = x;
        n += 1;
    }

    printf("x(%d) = %d > 0", n, x);
}

int main()
{
    task5();
}