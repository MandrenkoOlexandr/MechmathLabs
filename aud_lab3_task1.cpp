// Auditor lab 3 task 1
// Mandrenko Olexandr

#include <stdio.h>

void print_digits(unsigned n){
    unsigned a = n % 10;
    unsigned b = (n / 10) % 10;
    unsigned c = n / 100;

    printf("%u %u %u\n", c, b, a);
}

void sum_of_digits(unsigned n){
    unsigned a = n % 10;
    unsigned b = (n / 10) % 10;
    unsigned c = n / 100;
    
    printf("Sum of digits = %u\n", a + b + c);
}

void inverse(unsigned n){
    unsigned a = n % 10;
    unsigned b = (n / 10) % 10;
    unsigned c = n / 100;
    
    printf("Inverse = %u", a*100 + b*10 + c);
}
int main(){
    unsigned n;

    printf("n = ");
    scanf("%u", &n);

    if ((n >= 1000) || (n < 100)){
        printf("The number %u is not 3-digit!", n);
        return false;
    }

    print_digits(n);

    sum_of_digits(n);

    inverse(n);

}