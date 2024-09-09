#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    printf("Digite o tamanho da string: ");
    scanf("%d", &size);

    char *conteudo = (char *) calloc(size, sizeof(char));

    printf("Digite o conteúdo: ");
    for (int i = 0; i < size; ++i) {
        scanf(" %c", &conteudo[i]); 
    }

    for (int i = 0; i < size; ++i) {
        if (conteudo[i] != 'a' && conteudo[i] != 'e' && conteudo[i] != 'i' 
            && conteudo[i] != 'o' && conteudo[i] != 'u') {
            printf("%c", conteudo[i]);
        }
    }

    printf("\n");
    
    free(conteudo);

    return 0;
}