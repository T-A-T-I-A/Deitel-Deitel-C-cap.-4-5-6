    //Programma assegna i valori ad un array e stampa dalla funzione ricorsiva
#include <stdio.h>
#define SIZE 10

//prototipo di funzione
void stampa(int b[], int size);

int main()
{
    int a[SIZE]; //dichiarazione di array

    for (int i = 0; i < SIZE; i++) { //funzione itterattiva for
        a[i] = 3 * i; //assegnazione dei valori a array di indice i
    }

    stampa(a, 0); //chiama funzione ricorsiva 
}

//intestazione di funzione ricorsiva
void stampa(int b[], int a) 
{
    //stampa array finch� la condizione � vera
    if (a < SIZE) {
        printf("%4d", b[a]); 
        return stampa(b, a + 1); //chiama la funzione stampa (se stessa)
    }
}
