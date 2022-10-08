#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void genera(int a[]);

int main()
{
	int a[SIZE + 1] = { 0 };

	genera(a);

	for (int i = 1; i <= SIZE; i++) {
		printf("%4d", a[i]);
	}
}
void genera(int a[])
{
	srand(time(NULL));
	int x;

	for (int i = 0; i < SIZE + 1; i++) {
		x =  1 + (rand() % 20);

		for (int j = 0; j < i; j++) {
			if ( a[j] != x) {
				a[i] = x;
			}
			else {
				i-= 1;
				break;
			}
		}
	}
}
