#include <stdio.h>

int multiple(int a, int b);

int main()
{
    int x, y;

    for (unsigned int i = 1; i <= 5; i++) {
        printf("%s", "Inserisci primo numero: ");
        scanf("%d", &x);
        printf("%s", "Inserisci secondo numero: ");
        scanf("%d", &y);

        //printf("%d\n", multiple(x, y));
        if(multiple(x, y)){
            printf("%d è un multiplo di %d\n", y, x);
        }
        else{
            printf("%d non è un multiplo di %d\n", y, x);
        }
    }
}

int multiple(int a, int b)
{
    if (a % b == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
