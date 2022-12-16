#include<stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h> 
#include <math.h> 


// Laba3 3.1-3.7  3.18  3.23-d)

uint16_t mult(uint8_t x, uint8_t y) {
	return (uint16_t)((uint32_t)x * y);
}

void print_digits(unsigned n) {
	unsigned a = n % 10;
	unsigned b = (n / 10) % 10;
	unsigned c = n / 100;

	printf("%u %u %u\n", a, b, c);
}

unsigned sum_digit(unsigned n) {
	unsigned a = n % 10;
	unsigned b = (n / 10) % 10;
	unsigned c = n / 100;

	return a + b + c;
}

unsigned inverse(unsigned n) {
	unsigned a = n % 10;
	unsigned b = (n / 10) % 10;
	unsigned c = n / 100;

	return a * 100 + b * 10 + c;
}

bool perestanovky(unsigned n) {
	unsigned a = n % 10;
	unsigned b = (n / 10) % 10;
	unsigned c = n / 100;

	if (a == b || a == c || b == c) return false;

	printf("%u\n", 100 * a + 10 * b + c);
	printf("%u\n", 100 * a + 10 * c + b);
	printf("%u\n", 100 * b + 10 * a + c);
	printf("%u\n", 100 * b + 10 * c + a);
	printf("%u\n", 100 * c + 10 * b + a);
	printf("%u\n", 100 * c + 10 * a + b);

	return true;
}

int sqr_eqn_solve(double a, double b, double c) {
	double D = b * b - 4 * a * c;
	double x1, x2;

	if (fabs(a) < 0.000001) {
		if (fabs(b) < 0.0000001) {
			if (fabs(c) < 0.0000001) {
				printf("INFINITY");
				return -1;
			}
			printf("Not equation");
			return 0;
		}
		printf("One linear root");
		x1 = -c / b;
		printf("x1 = %lf\n", x1);
		return 1;
	}

	if (D < 0) {
		printf("No roots\n");
		return 0;
	}
	else if (fabs(D) < 0.000000001) {
		printf("One root");
		x1 = -b / 2 / a;
		printf(" x1 = %lf", x1);
		return 1;
	}
	else {
		printf("Two root ");
		x1 = (-b - sqrt(D)) / 2 / a;
		x2 = (-b + sqrt(D)) / (2 * a);
		printf("x1 = %lf, x2 = %lf", x1, x2);
	}
	return 2;
}

int sqr_eqn_solve2(double a, double b, double c) {
	double D = b * b - 4 * a * c;
	double x1, x2, x3, x4;

	if (fabs(a) < 0.000001) {
		if (fabs(b) < 0.0000001) {
			if (fabs(c) < 0.0000001) {
				printf("INFINITY");
				return -1;
			}
			printf("Not equation");
			return 0;
		}

		x1 = -c / b;
		if (x1 < 0) {
			printf("Not equation");
			return 0;
		}
		else {
			printf("Two linear root\n");
			printf("x1 = %lf\nx2 = %lf", sqrt(x1), -1 * sqrt(x1));
			return 2;
		}
	}

	if (D < 0) {
		printf("No roots\n");
		return 0;
	}
	else if (fabs(D) < 0.000000001) {
		x1 = -b / 2 / a;
		if (x1 > 0) {
			printf("Two roots");
			printf(" x1 = %lf\nx2 = %lf", sqrt(x1), -1 * sqrt(x1));
			return 2;
		}
		else {
			printf("No roots");
			return -1;
		}

	}
	else {
		printf("Four root ");
		x1 = (-b - sqrt(D)) / 2 / a;
		x2 = (-b + sqrt(D)) / (2 * a);
		printf("x1 = %lf, x2 = %lf, x3 = %lf, x4 = %lf", sqrt(x1), -1 * sqrt(x1), sqrt(x2), -1 * sqrt(x2));
	}
	return 2;
}


void swap(char* x, char* y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char* a, int i, int n)
{
	int j;
	if (i == n)
		printf("%s\n", a);
	else {
		for (j = i; j <= n; j++)
		{
			swap((a + i), (a + j));
			permute(a, i + 1, n);
			swap((a + i), (a + j));
		}
	}
}

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

	//3.23-d)
	/*double tl, tr, al, ar, x;
	printf("Input parametrs(tl,tr,al,ar,x): ");
	scanf_s("%lf,%lf,%lf,%lf,%lf", &tl, &tr, &al, &ar, &x);
	printf("Function: %lf\n", isReLu(tl, tr, al, ar, x));
	if (derivative_isReLu(tl, tr, al, ar, x) == -1) {
		printf("Derivative not exiest");
	}
	else {
		printf("Derivative: %lf", derivative_isReLu(tl, tr, al, ar, x));
	}*/



}