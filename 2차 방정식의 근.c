#include <stdio.h>
#include <math.h>

int main() {

	int a, b, c;
	int X1, X2;
	int D;

	scanf_s("%d %d %d", &a, &b, &c);

	D = pow(b, 2) - 4 * a * c;
	X1 = (-b + sqrt(D)) / 2 * a,
	X2 = (-b - sqrt(D)) / 2 * a;

	printf("근 :" %d %d", X1, X2);

	return 0;
}