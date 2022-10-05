// Auditor lab 4 task 2
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void task2(){
    unsigned i, n;

    printf("n = ");
    scanf("%u", &n);
    
    printf("%u! = ", n);
    for(i = 1; i < n; i++){
        printf("%d*", i);
    }
    printf("%d\n", n);

    printf("%u! = ", n);
     for(i = n; i > 1; i--){
        printf("%d*", i);
    }
    printf("1\n");
}
int main()
{
    task2();
}