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
        printf("x1 = %lf\n", x1);
        return 1;
    }
    else{
        printf("two roots:\n");
        x1 = (-b - sqrt(D)) / 2 / a;
        x2 = (-b + sqrt(D)) / 2 / a;
        printf("x1 = %lf\nx2 = %lf\n", x1, x2);
        return 1;
    }
}

int quad_eqn_solve(double a, double b, double c){

    double D = b*b - 4*a*c;
    double t1, t2, x1, x2, x3, x4;
    double epsilon = 2 * DBL_EPSILON;

    if(D < 0){
        printf("not roots\n");
        return 0;
    }
    else if (abs(D) < epsilon){
        t1 = -b / 2/ a;
        if (t1 < 0){
            printf("not roots\n");
            return 0;
        }
        else if (abs(t1) < epsilon){
            printf("one root:\n");
            printf("x1 = %lf\n", t1);
            return 1;
        }
        else{
            printf("two roots:\n");
            printf("x1 = %lf\nx2 = %lf\n", sqrt(t1), -sqrt(t1));
            return 1;
        }
    }
    else{
        t1 = (-b - sqrt(D)) / 2 / a;
        t2 = (-b + sqrt(D)) / 2 / a;
        if (t1 < 0){
            if (t2 < 0){
            printf("not roots\n");
            return 0;
        }
            else if (abs(t2) < epsilon){
                printf("one root:\n");
                printf("x1 = %lf", t2);
                return 1;
        }
            else{
                printf("two roots:\n");
                printf("x1 = %lf\nx2 = %lf", sqrt(t2), -sqrt(t2));
                return 1;
        }
        }
        else if (abs(t1) < epsilon){
            if (t2 < 0 || abs(t2) < epsilon){
                printf("one root:\n");
                printf("x1 = %lf", t1);
                return 1;
        }
            else{
                printf("3 roots:\n");
                printf("x1 = %lf\nx2 = %lf\nx3 = %lf", sqrt(t2), -sqrt(t2), t1);
                return 1;
        }
        }
        else{
            if (t2 < 0){
                printf("two roots\n");
                printf("x1 = %lf\nx2 = %lf", sqrt(t1), -sqrt(t1));
                return 1;
        }
            else if (abs(t2) < epsilon){
                printf("3 roots:\n");
                printf("x1 = %lf\nx2 = %lf\nx3 = %lf", sqrt(t1), -sqrt(t1), t2);
                return 1;
        }
            else{
                printf("4 roots:\n");
                printf("x1 = %lf\nx2 = %lf\nx3 = %lf\nx4 = %lf", sqrt(t1), -sqrt(t1), sqrt(t2), -sqrt(t2));
                return 1;
        }
        }
        return 1;
    }
}

int main()
{
    double a1, b1, c1, a2, b2, c2;

    printf("a) Input a,b,c: \n");
    int rs1 = scanf("%lf, %lf, %lf", &a1, &b1, &c1);
    if(rs1 != 3){
        printf("Incorrect input!!!");
        return -1;
    }
    printf("b) Input a,b,c: \n");
    int rs2 = scanf("%lf, %lf, %lf", &a2, &b2, &c2);
    if(rs2 != 3){
        printf("Incorrect input!!!");
        return -1;
    }


    printf("a) Equation %.2lfx^2 + %.2lfx + %.2lf = 0 have ", a1, b1, c1);
    sqr_eqn_solve(a1, b1, c1);

    printf("b) Equation %.2lfx^4 + %.2lfx^2 + %.2lf = 0 have ", a2, b2, c2);
    quad_eqn_solve(a2, b2, c2);
}
