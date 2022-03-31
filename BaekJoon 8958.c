#include <stdio.h>
#include <string.h>

int main() {

	char arr[80];
	int score, tcn, sum;

	scanf("%d", &tcn);

	int* scores = (int*)malloc(sizeof(int) * tcn);

	for (int i = 0; i < tcn; i++) {
		sum = 0;
		score = 1;
		scanf("%s", arr);

		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum += score;
				score++;
			}
			else if (arr[j] == 'X') {
				score = 1;
			}
		}
		scores[i] = sum;
	}
	
	for (int k = 0; k < tcn; k++) {
		printf("%d\n", scores[k]);
	}
	
	free(scores);
	return 0;
}