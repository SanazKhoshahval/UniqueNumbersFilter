// Purpose: This program reads in 20 numbers,
// each of which is between 10 and 100, inclusive.
// As each number is read, display it only if it’s not a duplicate of a number already read.
// Provide for the “worst case” in which all 20 numbers are different.
// Use the smallest possible array to solve this problem.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

// Define constants
#define MAX_NUMBERS 20

// Function prototype
int isUnique(int arr[], int length, int num);

// Main function
int main(void) {

	// Initialize variables
	int numbers[MAX_NUMBERS] = { 0 };  // Initialize array to store numbers
	int count = 0;

	// Get user input
	while (count < MAX_NUMBERS) {
		printf("Enter # %d : ", count + 1);
		int num = 0;
		scanf("%d", &num);

		// Check if the number is in the valid range
		if (num < 10 || num > 100) {
			printf("The number entered is not in the valid range of 10 to 100\n\n");
		}
		else if (isUnique(numbers, count, num)) {
			numbers[count++] = num; // Add to array and increment count if unique
			printf("The number: %d is unique.\n\n", num);
		}
		else {
			count++;  // Increment count if not unique
			puts("");
		}
	}

	// Print all unique numbers
	printf("\nAll of the unique numbers found are: \n\n");
	int counter = 0;  // Counter for non-zero numbers printed
	printf("    ");  // Initial spacing for alignment
	for (int i = 0; i < MAX_NUMBERS; i++) {
		if (numbers[i] != 0) {  // Only process non-zero numbers
			printf("%-6d", numbers[i]);  // Adjust spacing to align numbers
			counter++;  // Increment the counter

			if (counter % 5 == 0) {
				printf("\n    ");  // New line every 5 non-zero numbers
			}
		}
	}

	// Add a final newline if the last line isn't complete
	if (counter % 5 != 0) {
		printf("\n");
	}
	
}

// Function to check if a number is unique
int isUnique(int arr[], int length, int num) {

	// Loop through array to check if number is unique
	for (int i = 0; i < length; i++) {
		// If number is found in array, return 0
		if (arr[i] == num) {
			return 0;
		}
	}
	// If number is not found in array, return 1
	return 1;
}
