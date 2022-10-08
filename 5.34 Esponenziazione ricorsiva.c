#include <stdio.h>

int power(int, int);

int main()
{
    int x, y;

    printf("Inserisci la base: \n");
    scanf("%d", &x);
    printf("Inserisci l'esponente: \n");
    scanf("%d", &y);

    printf("\n%d elevato alla potenza di %d ugualea %d\n", x, y, power(x, y));

    return 0;
}
int power(int a, int b)
{
    if(b == 0){
        return 1;
    }
    else if(b == 1){
        return a;
    }
    else{
        return a * power(a, b - 1);
    }

    return 0;
}
