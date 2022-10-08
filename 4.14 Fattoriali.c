#include <stdio.h>

int main()
{
	unsigned long long int f = 1;
	for (unsigned int i = 0; i <= 5; i++) {
		for (unsigned int j = 1; j <= i; j++) {
			f = f * j;
		}
		printf("%3u! =\t %-15llu\n", i, f);
		f = 1;
	}
}
