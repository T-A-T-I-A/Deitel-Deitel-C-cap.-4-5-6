    //il programma cerca maggiore comune divisore
#include <stdio.h>

int gcd(int, int); //prototipo di funzione

int main()
{
    int x, y, z; //dichiarazione dei variabili

    printf("%s", "Inserisci primo numero: ");
    scanf("%d", &x); //legge un numero dalla tastiera
    printf("%s", "Inserisci secondo numero: ");
    scanf("%d", &y);

    z = gcd(x, y); //assegna il risultato della funzione gcd
 
    printf(z > 0 ? "\nMassimo comune divisore e' %d\n" : "\nMassimo comune divisore non trovato\n", z); 
}

//intestazione di funzione
int gcd(int a, int b)
{
    int j, i;
    if (a > b) {
        j = a;
    }
    else {
        j = b;
    }
    for (i = j; i >= 1; i--) { //assegna il numero pi� grande a i
        if (a % i == 0 && b % i == 0) { //se comune divisore sia trovato restituisce il numero
            return i;
        }
    }
    return 0;
}
