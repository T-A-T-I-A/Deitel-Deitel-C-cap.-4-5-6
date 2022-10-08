#include <stdio.h>

int main()
{
	unsigned int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
	unsigned int tp1 = 0, tp2 = 0, tp3 = 0, tp4 = 0, tp5 = 0;
	double a1, a2, a3, a4, a5;
	unsigned int x;
	int count;

	for (unsigned int z = 1; z <= 7; ++z) {

		printf("\n\t\tGiorno %u\n\n", z);

		for (count = 1; count <= 5; ++count) {

			printf("%s", "\ninserisci numero del prodotto : ");
			scanf("%u", &x);

			switch (x) {
			case 1:
				printf("%s", "Inserisci quantità venduta in un giorno: ");
				scanf("%u", &p1);
				tp1 += p1;
				break;

			case 2:
				printf("%s", "Inserisci quantità venduta in un giorno: ");
				scanf("%u", &p2);
				tp2 += p2;
				break;

			case 3:
				printf("%s", "Inserisci quantità venduta in un giorno: ");
				scanf("%u", &p3);
				tp3 += p3;
				break;

			case 4:
				printf("%s", "Inserisci quantità venduta in un giorno: ");
				scanf("%u", &p4);
				tp4 += p4;
				break;

			case 5:
				printf("%s", "Inserisci quantità venduta in un giorno: ");
				scanf("%u", &p5);
				tp5 += p5;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				printf("Hai inserito il numero sbagliato \n");
				count -= 1;
				break;
			}
		}

		a1 = 2.98 * tp1;
		a2 = 4.50 * tp2;
		a3 = 9.98 * tp3;
		a4 = 4.49 * tp4;
		a5 = 6.87 * tp5;
	}

	double total = a1 + a2 + a3 + a4 + a5;

	printf("%2s%11s%25s\n", "Numero del prodotto", "Quantita'", "Totale del prodotto");
	printf("1  %20u%25.2f\n", tp1, a1);
	printf("2  %20u%25.2f\n", tp2, a2);
	printf("3  %20u%25.2f\n", tp3, a3);
	printf("4  %20u%25.2f\n", tp4, a4);
	printf("5  %20u%25.2f\n", tp5, a5);
	printf("\n\nTotale di tutti i prodotti in una settimana e' %.2f\n", total);

	return 0;
}
