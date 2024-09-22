#include <stdio.h>

int generateLateralTriangle(int);
int printAsterisks(int);

int main() {
    printf("Digite o tamanho da lateral do triangulo: ");
    int lateralSize = 0;
    scanf("%d", &lateralSize);

    generateLateralTriangle(lateralSize);

    return 0;
}

int generateLateralTriangle(int num) {
    int height = 2 * num - 1;

    int asteriskCount = 0;
    for (int i = 0; i < height; ++i) {
        if (i >= num) {
            asteriskCount--;
            printAsterisks(asteriskCount);
            continue;
        }

        asteriskCount++;
        printAsterisks(asteriskCount);
    }

    return 0;
}

int printAsterisks(int num) {
    for (int i = 0; i < num; ++i) {
        printf("*");
    }

    printf("\n");
}