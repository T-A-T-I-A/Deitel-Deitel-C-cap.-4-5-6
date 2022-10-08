    //Programma inizializza un array con numeri casuali, la funzione determina e restituisce il valore minimo
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

//prototipo di funzione ricorsiva
int minimum(int b[], int x, int size);

int main()
{
    srand(time(NULL)); 

    int a[SIZE]; //dichiarazione di array

    for (int i = 0; i < SIZE; i++) { //funzione di itterazione da 0 a 99
        a[i] = 1 + rand() % 100; //assegna i numeri casuali tra 1 e 100
        printf("%5d", a[i]);
    }

    int min = minimum(a, 100, SIZE - 1); 
    printf("\nIl valore minimo è %d\n", min); //stampa numero minore
}

//intestazione di funzione
int minimum(int b[], int x, int size)
{
    if (size >= 0) { //seleziona finch� la condizione � vera

        if (b[size] < x) {  
            x = b[size]; //scambia valore di x al valore pi� piccolo
        }
        return minimum(b, x, size - 1); 
    }
    return x;  //restituisce il minimo
}
