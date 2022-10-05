// Auditor lab 3 task 5
// Mandrenko Olexandr

#include <stdio.h>

int main(){

    float a, b;
    
    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    if (a > b){
        printf("%f is higher, %f is lower\n", a, b);
    }
    else if (b > a){
        printf("%f is higher, %f is lower\n", b, a);
    }
    else{
        printf("%f = %f", a, b);
    }
}