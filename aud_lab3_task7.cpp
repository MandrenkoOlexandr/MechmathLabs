// Auditor lab 3 task 7
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>
#include <float.h>

int sqr_eqn_solve(double a, double b, double c){

    double D = b*b - 4*a*c;
    double x1, x2;
    double epsilon = 2 * DBL_EPSILON;

    if(D < 0){
        printf("not roots\n");
        return 0;
    }
    else if (abs(D) < epsilon){
        printf("one root:\n");
        x1 = -b / 2/ a;
        printf("x1 = %lf", x1);
        return 1;
    }
    else{
        printf("two roots:\n");
        x1 = (-b - sqrt(D)) / 2 / a;
        x2 = (-b + sqrt(D)) / 2 / a;
        printf("x1 = %lf\nx2 = %lf", x1, x2);
        return 1;
    }
}

int main()
{
    double a, b, c;

    printf("Input a,b,c: \n");
    int rs = scanf("%lf, %lf, %lf", &a, &b, &c);
    if(rs != 3){
        printf("Incorrect input!!!");
        return -1;
    }

    printf("Equation %.2lfx^2 + %.2lfx + %.2lf = 0 have ", a, b, c);
    sqr_eqn_solve(a, b, c);
}