#include <stdio.h>

int returnPositiveSum(int, int);

int main() {
    printf("Digite os dois números: ");
    int num1 = 0, num2 = 0;
    scanf("%d %d", &num1, &num2);

    printf("A soma de todos os números é: %d\n", returnPositiveSum(num1, num2));

    return 0;
}

int returnPositiveSum(int num1, int num2) {
    int smallest = num1 < num2 ? num1 : num2;
    int biggest = num1 > num2 ? num1 : num2;

    int sum = 0;

    for (int i = smallest; i <= biggest; ++i) {
        if (i > 0) {
            sum += i;
        }
    }

    return sum;
}