#include <stdio.h>

int main()
{

	unsigned int x, y;
	int min;

	printf("%s", "Quanti numeri vuoi confrontare? ");
	scanf("%u", &y);

	printf("%s", "\n\nInserisci il numero: ");
	scanf("%u", &x);

	min = x;
	for (unsigned int count = 1; count < y; ++count) {

		printf("%s", "Inserisci il numero: ");
		scanf("%u", &x);

		if (x < min) {
			min = x;
		}

	}

	printf("Minore e': %u\n", min);

	return 0;
}
