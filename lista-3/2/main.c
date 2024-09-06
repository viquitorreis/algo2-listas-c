#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    printf("Digite o tamanho desejado: ");
    scanf("%d", &size);

    // alocação dinamica com base no tamanho fornecido pelo user
    int *ptr = (int *) calloc(size, sizeof(int));

    for (int i = 0; i < size; ++i) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    int countEven = 0;
    int countOdd = 0;
    printf("Array completo: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", ptr[i]);
        (ptr[i] % 2) != 0 ? countOdd++ : countEven++;
    }

    printf("\nQuantidade de pares: %d\n", countEven);
    printf("Quantidade de ímpares: %d\n", countOdd);

    free(calloc);

    return 0;
}