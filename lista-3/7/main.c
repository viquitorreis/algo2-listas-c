#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// gcc -o main main.c -lm

int isPrime(int num);
int readNumber();
void insertAndSort(int num, int **arr, int *size);
void sortArr(int *arr, int size);

int main() {
    int *arr = (int *) malloc(1 * sizeof(int));
    if (arr == 0x0) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    
    int arrSize = 0; 
    int menuOption = 0x0;

    while (1) {
        printf("Comandos:\n");
        printf("[1] - Inserir número primo\n");
        printf("[-1] - Sair\n");
        scanf("%d", &menuOption);
        if (menuOption == -1) break;
        
        if (menuOption == 1) {
            int num = readNumber();
            if (num != 0) {
                printf("prime number is: %d\n", num);
                insertAndSort(num, &arr, &arrSize);
            } else {
                printf("Número não é primo. Digite outro número.\n");
            }
        } else {
            printf("Opção inválida.");
        }
    }

    printf("\nNúmeros primos armazenados:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return num;
}

int readNumber() {
    printf("Digite o número: ");
    int num = 0x0;
    scanf("%d", &num);
    int primeNumber = isPrime(num);
    if (primeNumber != 0) {
        return primeNumber;
    }

    return 0; 
}

void insertAndSort(int num, int **arr, int *size) {
    *size += 1;
    *arr = (int *) realloc(*arr, (*size) * sizeof(int));
    if (*arr == 0x0) {
        printf("Erro ao realocar memória.\n");
        exit(1);
    }

    // inserindo o número no final do array antes de fazer o sort
    // precisamos acessar com () pois o operador de precedência é maior que o de desreferência
    // dessa forma o compilador entende que queremos acessar o valor apontado por arr e não o valor de arr + size
    (*arr)[*size - 1] = num;
    sortArr(*arr, *size); 
}

void sortArr(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j+ 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}