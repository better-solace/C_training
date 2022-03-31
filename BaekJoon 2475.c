#include <stdio.h>
#include <math.h>

int main() {

	int arr[5];
	int sum = 0;
	int result;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum += pow(arr[i], 2);
	}

	result = sum % 10;

	printf("%d", result);

	return 0;
}