#include <stdio.h>

void perf(int a);

int main()
{
    for (int i = 1; i <= 10000; i++) {
        perf(i);
    }

    return 0;
}
void perf(int a)
{
    int somma = 0;

    for (int j = 1; j <= a/2; ++j) {
        if (a % j == 0) {
            somma += j;
        }
    }

    if (somma == a) {
        printf("Numero perfetto  %d\n", a);
    }
}
