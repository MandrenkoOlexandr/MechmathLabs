// HomeWork lab 6 task 22
// Mandrenko Olexandr

#include <stdio.h>
#include <math.h>

double task22_a(int k);
double task22_b(int k);
double task22_t(int k);
double task22_p(int k);

void task22() {
    int k;
    double pi;

    printf("Input k: ");
    scanf_s("%d", &k);

    pi = pow(task22_a(k) + task22_b(k), 2) / (4 * task22_t(k));

    printf("Res => %lf", pi);
}

int main()
{
    task22();
}

double task22_a(int k) {
    if (k == 0) return 1;
    else {
        return (task22_a(k - 1) + task22_b(k - 1)) / 2;
    }
}

double task22_b(int k) {
    if (k == 0) return 1 / sqrt(2);
    else {
        return sqrt(task22_a(k - 1) * task22_b(k - 1));
    }
}

double task22_t(int k) {
    if (k == 0) return 0.25;
    else {
        return task22_t(k - 1) - task22_p(k - 1) * pow((task22_a(k - 1) - task22_a(k)), 2);
    }
}

double task22_p(int k) {
    if (k == 0) return 1;
    else {
        return 2 * task22_p(k - 1);
    }
}