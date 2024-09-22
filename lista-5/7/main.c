#include <stdio.h>

int DesenhaLinha(int);

int main() {
    printf("Digite o número de '=' a ser desenhado: ");
    int num = 0;
    scanf("%d", &num);

    DesenhaLinha(num);

    return 0;
}

int DesenhaLinha(int x) {
    for (int i = 0; i < x; ++i) {
        printf("=");
    }

    printf("\n");
    return 0;
}