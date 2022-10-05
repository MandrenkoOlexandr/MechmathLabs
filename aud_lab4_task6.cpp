// Auditor lab 4 task 6
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task6a(){
    unsigned i, n;
    float sq = sqrt(2);
    printf("n = ");
    scanf("%u", &n);
    
    for(i = 2; i < n; i++){
        sq = sqrt(2 + sq);
    }
    printf("%f", sq);
}

void task6b(){
    unsigned i, n;
    float sq, koef;
    printf("n = ");
    scanf("%u", &n);
    
    koef = 3 * n;
    sq = sqrt(koef);
    for(i = 2; i < n; i++){
        koef -= 3;
        sq = sqrt(koef + sq);
    }
    printf("%f", sq);
}

int main()
{
    task6a();
    task6b();
}