#include <stdio.h>

int main()
{
	for (unsigned x = 1; x <= 40; x++) {
		for (unsigned int y = 1; y <= 10; y++) {
			if (  (x <= 10 && y <= x) || (x > 10 && x <= 20 && y + (x - 11) <= 10) || (x > 20 && x <= 30 && (y + 20 ) >= x) || (x > 30 && y + (x -31) >= 10)) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		puts("");
	}
}
