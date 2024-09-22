#include <stdio.h>

int isPrime(int);

int main() {
    printf("Digite o número: ");
    int num = 0;
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("Número é primo.\n");
        return 0;
    }

    printf("Número não é primo.\n");
    return 0;
}

int isPrime(int x) {
    // 1 não é primo
    if (x < 2) return 0;

    for (int i = 2; i < x; ++i) {
        // se for divisível por qualquer outro número que não seja ele mesmo não é primo
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}