#include <stdio.h>
#include <stdlib.h>

int readValue();

int main(void) {
    int size = readValue();

    void *arr = (void *) malloc(size);

    for (int i = 0; i < size; ++i) {
        int val = rand() % (100 + 1);
        if (i < 10) {
            arr[i] = (float) val;
        }
    }

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