#include <stdio.h>

int calcDoubleFactorial(int);

int main() {
    printf("Digite o número para calcular o fatorial duplo: ");
    int num = 0;
    scanf("%d", &num);

    printf("O fatorial de %d é: %d\n", num, calcDoubleFactorial(num));

    return 0;
}

int calcDoubleFactorial(int x) {
    if (x == 0 || x == 1) return 1;

    int sum = 1;
    for (int i = 2; i <= x; ++i) {
        if (i % 2 != 0) {
            sum *= i;
        }
    }

    return sum;
}