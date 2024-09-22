#include <stdio.h>

int isPositive(int);

int main() {
    printf("Digite o número: ");
    int num = 0;
    scanf("%d", &num);

    int isPos = isPositive(num);

    if (isPos == 1) {
        printf("Número é positivo.\n");
        return 0;
    }

    if (!isPos) {
        printf("Número é 0.\n");
        return 0;
    }
    
    printf("Número é negativo.\n");

    return 0;
}

int isPositive(int x) {
    if (x < 0) {
        return -1;
    }

    if (x > 0) {
        return 1;
    }

    return 0;
}