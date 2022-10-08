    
#include <stdio.h>
#define SIZE 10

int main()
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	puts("Data items in original order");

	for (size_t i = 0; i < SIZE; i++) {
		printf("%4d", a[i]);
	}

	int count = 1, counter = 1;

	for (unsigned int pass = 0; pass < SIZE - 1; pass++) {
		for (size_t i = pass; i < SIZE - 1; i++) {

			if (a[i] > a[i + 1]) {
				int hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}

	puts("\nData items in ascending order");

	for (size_t i = 0; i < SIZE; i++) {
		printf("%4d", a[i]);
	}
}
