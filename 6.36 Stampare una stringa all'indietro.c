#include <stdio.h>
#define SIZE 5

void stringReverse(char a[], int size);

int main()
{
	char a[] = { 'h', 'e', 'l', 'l', 'o' };

	stringReverse(a, SIZE - 1);
}
void stringReverse(char a[], int size)
{
	if (size < 0){
	    return;
	} 
	else{
		printf("%c ", a[size]);
		return stringReverse(a, size - 1);
	}
}
