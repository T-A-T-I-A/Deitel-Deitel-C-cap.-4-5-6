#include <stdio.h>

char fillCharacter(char c);
void side(char b, int a);

int main()
{
	int x;
	char y;
	printf("%s", "Inserisci un carattere: ");
	scanf("%c", &y);
	printf("%s", "Inserisci un numero: ");
	scanf("%d", &x);

	side(y, x);

	return 0;
}

void side(char b, int a)
{
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			fillCharacter(b);
		}
		puts("");
	}
}

char fillCharacter(char c)
{
	printf("%c", c);
}
