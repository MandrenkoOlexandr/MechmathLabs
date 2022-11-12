// HomeWork lab 5 task 16k
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

void ysum(){
    double x, powerx, eps, s = 1, u = 1, l = 2, sign = 1, d, us = 1, ls = 2;
    
    printf("x = ");
    scanf("%lf", &x);
    printf("e = ");
    scanf("%lf", &eps);
    
    if (abs(x) > 1){ 
        printf("Incorrect input!");
        return;
    }
    powerx = x;
    d = 1;
    while (abs(d) > eps){
        d = sign * powerx * u / l;
        s += d;
        sign *= -1;
        powerx *= x;
        ls += 2;
        l *= ls;
        if (sign > 0){
            us += 2;
            u *= us;
        }
    }
    d = powerx * u / l;
    s += d;
    printf("sqrt(1 + %lf) = %lf", x, s);
}

int main()
{
    ysum();
}