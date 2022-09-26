// Auditor lab 3 task 6
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;

    printf("Input a,b,c");
    int r_s = scanf("%f, %f, %f",&a,&b,&c);

    if(r_s != 3){
        printf("Incorrect input!!!");
        return -1;
    }

    float amax = abs(a);
    float amin = abs(a);

    if (abs(b) > amax){
        amax = abs(b);
    }
    if (abs(c) > amax){
        amax = abs(c);
    }
    if (abs(b) < amin){
        amin = abs(b);
    }
    if (abs(c) < amin){
        amin = abs(c);
    }

    printf("Maximum is %f\nMinimum is %f", amax, amin);
}
    
