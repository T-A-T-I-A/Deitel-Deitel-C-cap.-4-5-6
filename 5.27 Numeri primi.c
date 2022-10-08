#include <stdio.h>

void primo(int);

int main()
{
    for (int i = 1; i < 1000000; i++) {
        primo(i);
    }
}

void primo(int x)
{
    int sum = 0;

    for (int j = 1; j <= x / 2; j++) {
        if (x % j == 0) {
            sum += 1;
        }
        if (sum > 2) {
            break;
        }
    }
    if (sum <= 1) {
        printf("Numero primo %d\n", x);
    }
}
