#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    printf("Digite o tamanho da string: ");
    scanf("%d", &size);

    char *conteudo = (char *) calloc(size, sizeof(char));

    // string é inicialmente vazia, então vamos iniciar como \0
    // int i = 0;
    // conteudo[i] = '0';
    // while (conteudo[i] != '\0') {
    //     scanf("Digite o conteúdo: %c", conteudo[i]);
    //     i++;
    // }

    printf("Digite o conteúdo: ");
    for (int i = 0; i < size; ++i) {
        scanf(" %c", &conteudo[i]); 
    }

    for (int i = 0; i < size; ++i) {
        if (conteudo[i] != 'a' && conteudo[i] != 'e' && conteudo[i] != 'i' 
            && conteudo[i] != 'o' && conteudo[i] != 'u') {
            printf("%s", &conteudo[i]);
        }
    }

    free(conteudo);

    return 0;
}