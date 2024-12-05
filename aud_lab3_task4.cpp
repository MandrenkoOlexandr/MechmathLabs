// Auditor lab 3 task 4
// Mandrenko Olexandr

#include <stdio.h>
#include <stdint.h>

uint16_t mult(uint8_t x, uint8_t y){
    return (uint16_t)((uint32_t)x * y);
}

int main()
{
    unsigned char a, b;
    unsigned short c;

    printf("Input 8-bit integers a,b =\n");
    int rs = scanf("%hhu, %hhu", &a, &b);
    if (rs != 2){
        printf("Incorrect input!!!");
        return -1;
    }

    c = mult(a, b);
    printf("c = %hu", c);
}