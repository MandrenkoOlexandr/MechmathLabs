// HomeWork lab 3 task 21
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

double point_on_the_sphere(double x, double y, double z, double R){
    if (sqrt(x*x + y*y + z*z) > R){
        printf("Point (%.2lf, %.2lf, %.2lf) doesn't belong to the sphere of radius %lf", x, y, z, R);
        return 0;
    }
    else{
        printf("Point (%.2lf, %.2lf, %.2lf) belongs to the sphere with radius %lf", x, y, z, R);
        return 1;
    }
}

int main()
{
    double x, y, z, R;

    printf("Input (x,y,z): \n");
    int rs = scanf("%lf, %lf, %lf", &x, &y, &z);
    if(rs != 3){
        printf("Incorrect input!!!");
        return -1;
    }
    printf("Input R: \n");
    scanf("%lf", &R);

    point_on_the_sphere(x, y, z, R);
}