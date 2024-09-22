#include <stdio.h>

int generateTriangle(int);
int printAsterisks(int asterisks, int base);

int main() {
    printf("Digite o tamanho do triangulo: ");
    int height = 0;
    scanf("%d", &height);

    generateTriangle(height);

    return 0;
}

int generateTriangle(int height) {
    int baseVal = 2 * height - 1;

    for (int i = 0; i < height; ++i) {
        int asterisksCount = 2 * i + 1; // sempre vai somar 2 para cada linha
        printAsterisks(asterisksCount, baseVal);
    }

    return 0;
}
int printAsterisks(int asterisksCount, int base) {
    int nonAsterisksCount = (base - asterisksCount) / 2;
    
    for (int i = 0; i < nonAsterisksCount; ++i) {
        printf(" ");
    }

    for (int i = 0; i < asterisksCount; ++i) {
        printf("*");
    }

    printf("\n");

    return 0;
}