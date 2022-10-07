// Auditor lab 5 task 7
// Mandrenko Olexandr

#include <stdio.h>

void Sumab(){
    float a1 = 0, a2 = 1, b1 = 1, b2 = 0, ak, bk, S = 6, Power2 = 4;
    unsigned n, k;
    
    printf("n = ");
    scanf("%u", &n);

    if (n == 1){
        printf("S(1) = %d", 2);
        return;
    }
    else if (n == 2){
        printf("S(2) = %d", 6);
        return;
    }

    for (k = 3; k <= n; k++){
        bk = b2 + a2;
        ak = a2/k + a1*bk;
        a1 = a2;
        b1 = b2;
        a2 = ak;
        b2 = bk;
        Power2 *= 2;
        S += Power2 / (ak + bk);
    }

    printf("S(%u) = %f", n, S);
}

int main()
{
    Sumab();
}