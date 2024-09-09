#include <stdio.h>
#include <stdlib.h>

int readValue();

int main(void) {
    int size = readValue();

    // void *arr = (void *) malloc(size);
    void *arr = malloc(size * sizeof(float));
    if (arr == 0x0) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    float *floatArr = (float *) arr;

    for (int i = 0; i < size; ++i) {
        int val = rand() % (100 + 1);
        if (i < 10) {
            floatArr[i] = (float) val;
        }
    }

    printf("10 primeiros elementos:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Elemento %d: %.2f\n", i + 1, floatArr[i]);
    }
    
    free(arr);

    return 0;
}

int readValue() {
    int size = 0;
    printf("Digite o valor desejado: ");
    scanf("%d", &size);

    if (size < 10) {
        readValue();
    }

    return size;
}