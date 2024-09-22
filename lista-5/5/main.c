#include <stdio.h>

int isPerfectSquare(int);

int main() {
    printf("Digite o número: ");
    int num = 0;
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("Número é um quadrado perfeito\n");
        return 0;
    }

    printf("Número é não é quadrado perfeito\n");
    return 0;
}

int isPerfectSquare(int x) {
    for (int i = 0; i < x; ++i) {
        if ((i * i) == x) {
            return 1;
        }
    }

    return 0;
}