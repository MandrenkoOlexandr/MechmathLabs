// task4 part D

#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("x = ");
    scanf("%F", &x);
    
    float y1 = 2 * x, y2 = y1 * y1, y3 = y2 * y1, y4 = y2 * y2;
    printf("y = %F", y4 + y3 + y2 + y1 + 1);

}