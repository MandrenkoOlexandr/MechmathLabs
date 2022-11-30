// Auditor lab 9 task 8.2
// Mandrenko Olexandr

#include <stdio.h>
#define N 3
#define M 3

void matrprint(float a[][N], int n){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%g ", a[i][j]);
            }  
        printf("\n");      
        }     
}

int repl(float matr[M][N], unsigned n, unsigned m, float a){
    if (n >= M || m >= N){
        return - 1;
    }
    matr[n][m] = a;
    return 0;
}
void task2(){
    float m1[M][N] = {{1.0f, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    unsigned n, m;

    printf("n = ");
    scanf("%u", &n);
    printf("m = ");
    scanf("%u", &m);
    float a;
    printf("a = ");
    scanf("%f", &a);
    
    repl(m1, n, m, a);
    matrprint(m1, M);
}

int main()
{
    task2();
}