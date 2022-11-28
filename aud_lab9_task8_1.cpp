// Auditor lab 9 task 8.1
// Mandrenko Olexandr

#include <stdio.h>
#define N 3
#define M 3

void matrprint(int a[][N], int n){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", a[i][j]);
            }  
        printf("\n");      
        }     
}

int repl1(int a[M][N], int n, int m){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(a[i][j] == m){
                a[i][j] = n;
                return 1;
            }        
        }
    }
    return 0;
}

void task1(){
    int m1[M][N] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    int n, m;

    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);

    repl1(m1, n, m);
    matrprint(m1, M);


}

int main()
{
    task1();
}