#include <stdio.h>
#include <stdlib.h>

int main() {
    // declarando array de 5 elementos dinamicamente
    int *ptr = (int *) calloc(5, sizeof(int));

    for (int i = 0; i < 5; ++i) {
        printf("Digite o número: %d ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; ++i) {
        printf("Número %d: %d\n", i + 1, ptr[i]);
    }

    free(ptr);

    return 0;
}