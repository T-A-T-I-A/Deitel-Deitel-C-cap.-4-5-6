    #include <stdio.h>
#define SIZE 10

enum status {CONTINUE, END};

int main()
{
	int a[SIZE] = { 0 };
	enum status prenotazione = CONTINUE;
	int x, posto, n;

	while (CONTINUE == prenotazione) {

		printf("Inserisci 1 per \"first class\"\nInserisci 2 per \"economy\"\n");
		scanf("%d", &x);

		switch (x) {
		    case 1:

				printf("%s", "\n       FIRST CLASS \n     Mapa dei posti\n");

				printf(" ________________________\n");
				for (int i = 0; i < 5; i++) {
					printf("|Posto numero |%4d|%5d|\n", i + 1, a[i]);
					printf("|_____________|____|_____|\n");

				}

				printf("\nScegli posto: ");
				scanf("%d", &posto);

				if (a[posto - 1] == 0 && posto < 6) {
					a[posto - 1] = 1;

					printf("\n ___________________________");
					printf("\n|CLASS                 FIRST|\n|Posto N%20d|", posto);
					printf("\n|___________________________|\a\n");
				}
				else {
					printf("\nIl numero selezionato non e' disponibile\n");
				}
				int total = 0;

				for (int i = 0; i < 5; i++) {
					total += a[i];
					//printf("\n%70d\n", total);
				}

				if (total == 5) {
					printf("\nPosti in \"First Class\" non sono piu' disponibili,\nVuoi prenotare posti in \"Economy\"(5 per continuare, -1 per fine)? ");
					scanf("%d", &n);
					if (n == -1) {
						printf("\nProssimo volo sara' fra 3 ore");
						prenotazione = END;
					}
				}
			break;

		case 2:

			printf("%s", "\n     ECONOMY CLASS \n     Mapa dei posti\n");

			printf(" ________________________\n");
			for (int i = 5; i < 10; i++) {
				printf("|Posto numero |%4d|%5d|\n", i + 1, a[i]);
				printf("|_____________|____|_____|\n");

			}

			printf("\nScegli posto: ");
			scanf("%d", &posto);

			if (a[posto - 1] == 0 && posto < 11) {
				a[posto - 1] = 1;

				printf("\n ___________________________");
				printf("\n|CLASS               ECONOMY|\n|Posto N%20d|", posto);
				printf("\n|___________________________| \a\n");
			}
			else {
				printf("\nIl numero selezionato non e' disponibile\n");
			}

			int sum = 0;

			for (int i = 5; i < 10; i++) {
				sum += a[i];
				//printf("\n%70d\n", sum);
			}

			if (sum == 5) {
				printf("\nPosti in \"Economy\" non sono piu' disponibili,\nVuoi prenotare posti in \"First Class\"(5 per continuare, -1 per fine)? ");
				scanf("%d", &n);
				if (n == -1) {
					printf("\nProssimo volo sara' fra 3 ore");
					prenotazione = END;
				}
			}
			break;
		case '\n':
		case '\t':
		case '\0':
			break;
		default:
			printf("\nHai inserito numero sbagliato\n");
		}

		puts("");
	}

	return 0;
}
