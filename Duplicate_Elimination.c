#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define MAX_NUMBERS 20

int isUnique(int arr[], int length, int num);

int main(void) {
	int numbers[MAX_NUMBERS] = { 0 };  // Initialize array to store numbers
	int count = 0;

	while (count < MAX_NUMBERS) {
		printf("Enter # %d: ", count + 1);
		int num = 0;
		scanf("%d", &num);

		// Check if the number is in the valid range
		if (num < 10 || num > 100) {
			printf("The number entered is not in the valid range of 10 to 100\n\n");
		}
		else if (isUnique(numbers, count, num)) {
			numbers[count++] = num; // Add to array and increment count if unique
			printf("The number %d is unique.\n\n", num);
		}
		else {
			puts("");
		}
	}

	printf("\n All of the unique numbers found are: \n");
	for (int i = 0; i < MAX_NUMBERS; i++) {
		printf("%-3d ", numbers[i]);  // Adjust spacing to align numbers
		if ((i + 1) % 5 == 0) {
			printf("\n");  // New line every 5 numbers
		}

	}
}

int isUnique(int arr[], int length, int num) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num) {
			return 0;
		}
	}
	return 1;
}
