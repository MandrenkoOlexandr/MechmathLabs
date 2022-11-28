// Auditor lab 9 task 8.3
// Mandrenko Olexandr

#include <stdio.h>
#include <stdbool.h>
#define N1 20
#define M1 20

void printMatr(const double matr[N1][M1], size_t n, size_t m){
    for(size_t i = 0; i < n; i++){
        for(size_t j = 0; j < m; j++){
            printf("%lf ", matr[i][j]);
        }
        printf("\n");
    }
}

bool inpMatr(double matr[N1][M1], size_t n, size_t m){
    for(size_t i = 0; i < n; i++){
        for(size_t j = 0; j < m; j++){
            printf("a[%zu, %zu] = ", i, j);
            int r = scanf("%lf", &matr[i][j]);
            if (r != 1){
                return false;
            }
        }
    }
    return true;
}

void task3(){
   double matr[N1][M1];
    
    size_t n, m;
    printf("n = ");
    scanf("%zu", &n);
    printf("m = ");
    scanf("%zu", &m);

    if (n >= N1 || m >= M1){
        printf("Uncorect size");
        return;
    }
    bool r = inpMatr(matr, n, m);
    if(!r){
        printf("Fail");
        return;
    }
    printMatr(matr, n, m);
}

int main()
{
    task3();
}