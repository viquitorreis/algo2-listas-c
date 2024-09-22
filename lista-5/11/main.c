#include <stdio.h>

double calcSerie(int);

int main() {
    printf("Digite o valor de N: ");
    int num;
    scanf("%d", &num);

    double resultado = calcSerie(num);
    printf("O resultado da série é: %.2f\n", resultado);

    return 0;
}

double calcSerie(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; ++i) {
        double numerator = (i * i) + 1;
        double denominator = i + 3;

        sum += numerator / denominator;
    }

    return sum;
}