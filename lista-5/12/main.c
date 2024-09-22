#include <stdio.h>

int calcFatorial(int);

int main() {
    printf("Digite o número para calcular o fatorial: ");
    int num = 0;
    scanf("%d", &num);

    printf("O fatorial de %d é: %d\n", num, calcFatorial(num));

    return 0;
}

int calcFatorial(int x) {
    if (x == 0 || x == 1) return 1;

    int sum = 1;
    for (int i = 2; i <= x; ++i) {
        sum *= i;
    }

    return sum;
}