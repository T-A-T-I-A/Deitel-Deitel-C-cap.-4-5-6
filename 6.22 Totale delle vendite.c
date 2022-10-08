#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int a[][5], char b[], char c[]);
void vendite(int a[][5]);
int totale(int sum[][5], int tot);

int main()
{
	int sales[4][5] = { {0},{0} };
	srand(time(NULL));
	int sumA = 0, sumV = 0;
	char b[] = "AGENTE";
	char c[] = "PRODOTTO";

	vendite(sales);
	print(sales, b, c);
}

void vendite(int a[][5])
{
	for (int z = 0; z < 30; z++) {

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				a[i][j] += rand() % 1000;
			}
		}
	}
}

void print(int a[][5], char b[], char c[])
{
	int tot = 0;
	printf("\n _________________________________________________________________________________");
	printf("\n|          |%s 1|%s  2|%s  3|%s  4|%s  5|     TOTALE|", c, c, c, c, c);
	printf("\n|__________|__________|___________|___________|___________|___________|___________|");
	for (int i = 0; i < 4; i++) {
		int sumA = 0;

		printf("\n|%7s  %d|", b, i + 1);
		for (int j = 0; j < 5; j++) {

			sumA += a[i][j];
			
			printf("%9d | ", a[i][j]);
			
		}
		printf("%9d |\n|__________|__________|___________|___________|___________|___________|___________|", sumA);

		tot += sumA;
	}
	totale(a, tot);
}
int totale(int sum[][5], int tot)
{
	int sumP[5] = { 0 };
	printf("\n|TOTALE    |");
	for (int i = 0; i < 5; i++) {
		for(int j = 0; j < 4; j++){
			sumP[i] += sum[j][i];
		}
		printf("%10d| ", sumP[i]);
		tot += sumP[i];
	}
	printf("%10d|\n|__________|__________|___________|___________|___________|___________|___________|", tot);
}
