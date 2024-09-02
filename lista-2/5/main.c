#include <stdio.h>

void swap(int *a, int *b);
void quicksort(int arr[], int tamanho);
void quicksort_recursive(int arr[], int inicio, int fim);
int partition(int arr[], int inicio, int fim);

int main() {
    int arr[10];
    int *current = &arr[0];

    while (current < &arr[0] + 10) {
        scanf("%d", current);
        current++;
    }

    int tamanhoArr = sizeof arr / sizeof arr[0];
    // printf("Antes de ordenar...\n ");
    // for (int i = 0; i < tamanhoArr; ++i) {
    //     printf("%d\n", arr[i]);
    // }
    quicksort(arr, tamanhoArr);

    printf("Depois de ordenar... ");
    for (int i = 0; i < tamanhoArr; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int inicio, int fim) {
    int pivo = arr[fim];
    int i = inicio;

    for (int j = inicio; j < fim; ++j) {
        if (arr[j] <= pivo) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[fim]);

    return i;
}

void quicksort(int arr[], int tamanho) {
    quicksort_recursive(arr, 0, tamanho - 1);
}

void quicksort_recursive(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int indice_pivo = partition(arr, inicio, fim);
        quicksort_recursive(arr, inicio, indice_pivo - 1); // lado esquerdo do pivo
        quicksort_recursive(arr, indice_pivo + 1, fim);
    }
}