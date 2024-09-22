#include <stdio.h>

int calcDouble(int);

int main() {
    printf("Digite o número: ");
    int num = 0;
    scanf("%d", &num);

    printf("Dobro do número: %d\n", calcDouble(num));
    return 0;
}

int calcDouble(int x) {
    return x * 2;
}