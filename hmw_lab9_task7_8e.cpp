// HomeWork lab 9 task 7.8
// Mandrenko Olexandr

#include <stdio.h>
#define N 100

void task7_8(){
    int arr[N];
    unsigned pnum;

    for (int i = 0; i < N; i++)
    {
        printf("a[%i]=", i);
        scanf("%i", &arr[i]);

        if (arr[i] <= 0)
        {
            break;
        }
        int k = 0;
        for (int j = 1; j < i; j++)
        {
            if (arr[i] % j == 0){
                k += 1;
            }
        }
        if (k == 2){
            pnum += 1;
        }
    }
    printf("res = %u", pnum);
}

int main()
{
    task7_8();
}