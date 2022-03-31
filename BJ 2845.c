#include <stdio.h>

int main() {

	int l, p, std;
	int arr[5];
	int arr2[5];

	scanf("%d %d", &l, &p);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		std = l * p;
		arr2[i] = arr[i] - std;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}

	return 0;
}