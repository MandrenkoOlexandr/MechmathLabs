// Auditor lab 1 task 3
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

int main()
{
    int a;

    printf("a = ");
    scanf("%d", &a);

    if (a < 0 || a > 9){
        printf("Це не цифра!!!");
        return 0;
    }
    
    printf("- %d - %d - %d \n %d | %d | %d\n- %d - %d - %d", a, a, a, a, a, a, a, a, a);
}