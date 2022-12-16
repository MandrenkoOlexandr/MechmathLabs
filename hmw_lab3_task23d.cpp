// HomeWork lab 3 task 23 d
// Mandrenko Olexandr

#include<stdio.h>
#include <math.h> 

double isReLu(double tl, double tr, double al, double ar, double x) {
	if (x <= tl) {
		return tl + al * (x - tl);
	}
	else if (x > tl && x < tr) {
		return 0;
	}
	else {
		return tr + ar * (x - tr);
	}
}

double derivative_isReLu(double tl, double tr, double al, double ar, double x) {
	if (x <= tl) {
		return -1;
	}
	else if (x > tl && x < tr) {
		return 0;
	}
	else {
		return -1;
	}
}

int main() {

	double tl, tr, al, ar, x;
	printf("Input parametrs(tl,tr,al,ar,x): ");
	scanf_s("%lf,%lf,%lf,%lf,%lf", &tl, &tr, &al, &ar, &x);
	printf("Function: %lf\n", isReLu(tl, tr, al, ar, x));
	if (derivative_isReLu(tl, tr, al, ar, x) == -1) {
		printf("Derivative not exiest");
	}
	else {
		printf("Derivative: %lf", derivative_isReLu(tl, tr, al, ar, x));
	}



}