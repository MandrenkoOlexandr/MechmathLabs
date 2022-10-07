// Auditor lab 5 task 3
// Mandrenko Olexandr

#include <stdio.h>

void Con(){
    unsigned i, n, nk = 1, maxI = 1, s;

    for (n = 1; n < 1000; n++){
        i = 1;
        s = n;
        while (s > 1){
            if (s % 2 == 0){
                s = s / 2;
            }
            else if (s == 1){
                return;
            }
            else{
                s = 3 * s + 1;
            }
            i += 1;

        }
        if (i > maxI){
            maxI = i;
            nk = n;
        }
    }
    printf("Nk = %u Requires %u steps", nk, maxI);
}


int main()
{
    Con();
}