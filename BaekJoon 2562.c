#include <stdio.h>

int main() {

	int arr[9] = { 0 };
	int i, max = 0;
	int num1 = 0;

	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}

	max = arr[0];

	for (i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			num1 = i;
		}
	}

	printf("%d\n", max);
	printf("%d", num1 + 1);

	return 0;
}