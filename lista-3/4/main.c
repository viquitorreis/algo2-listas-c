#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *) calloc(1500, sizeof(int));

    for (int i = 0; i <= 1500; ++i) {
        arr[i] = i;
    }

    for (int i = 0; i < 10; ++i) {
        printf("Indice do elemento: %d. Elemento: %d\n", i, arr[i]);
    }

    for (int i = 1491; i <= 1500; ++i) {
        printf("Indice do elemento: %d. Elemento: %d\n", i, arr[i]);
    }

    free(arr);

    return 0;
}