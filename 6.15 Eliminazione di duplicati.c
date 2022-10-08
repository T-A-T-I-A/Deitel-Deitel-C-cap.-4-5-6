#include <stdio.h>
#define SIZE 20

int main()
{
    unsigned int a[SIZE] =
                     { 10, 25, 15, 68, 45, 23, 99, 56, 100, 30,
                       79, 45, 15, 63, 92, 75, 19, 64, 77, 88 };
    unsigned int count = 0, b[SIZE];

    for (unsigned int i = 0; i < SIZE - 1; i++) {
        printf("%4u", a[i]);
        for (unsigned int j = 0; j < SIZE - 1; j++) {
            if (a[j] > a[j + 1]) {
                unsigned int hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
    
    puts("\n\nArray dopo eliminazione dei duplicati e ordinamento crescente \n");

    for (unsigned int i = 0; i < SIZE; i++) {
        if (a[i] < a[i + 1]) {
            b[i] = a[i];
            //count++;

            printf("%4u", b[i]);
        }
    }

}
