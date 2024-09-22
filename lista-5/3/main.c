#include <stdio.h>

int isEven(int);

int main() {
    printf("Digite o número: ");
    int num = 0;
    scanf("%d", &num);

    if (isEven(num)) {
        printf("Número é par\n");
        return 0;
    }

    printf("Número é ímpar\n");
    return 0;
}

int isEven(int x) {
    if (x % 2 != 0) {
        return 0;
    }

    return 1;
}