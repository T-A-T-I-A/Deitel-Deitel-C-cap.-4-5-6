#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main()
{
    int a[SIZE];

    for (size_t x = 0; x < SIZE; x++) {
        a[x] = 2 * x;
    }

    int searchkey;
    printf("Enter integer search key: ");
    scanf("%d", &searchkey);

    size_t index = linearSearch(a, searchkey, SIZE);

    if (index != -1) {
        printf("Found value in element %zd\n", index);
    }
    else {
        puts("Value not found");
    }
}
size_t linearSearch(const int array[], int key, size_t size)
{
    if (size == 0 && size != key) {
        return -1;
    }
    if (array[size] == key ) {
        return size;
    }
    else{
        return linearSearch(array, key, size - 1);
    }
}
