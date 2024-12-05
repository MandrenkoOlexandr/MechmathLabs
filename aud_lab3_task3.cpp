// Auditor lab 3 task 3
// Mandrenko Olexandr

#include <stdio.h>

int main(){

    int a, b, c;
    unsigned long long res;

    printf("Input a,b,c = \n");
    int r_s = scanf("%d, %d, %d", &a, &b, &c);
    if(r_s != 3){
        printf("Incorrect input!!!");
        return -1;
    }

    res = (unsigned long long)a * b * c;

    printf("R = %Lu", res);
}