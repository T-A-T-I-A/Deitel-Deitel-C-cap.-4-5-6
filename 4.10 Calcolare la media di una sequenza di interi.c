#include <stdio.h>

int main()
{
	int x, count = 0, total = 0;

	printf("%s", "Inserisci un numero intero (9999 per fine): ");
	scanf("%d", &x);

	while (x != 9999) {

		total += x;
		count++;
		printf("%s", "Inserisci un numero intero (9999 per fine): ");
		scanf("%d", &x);
	}

	float media = (float)total / count;
	printf("\nLa media di numeri inseriti: %.2f", media);
}
