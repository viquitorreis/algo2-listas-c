#include <stdlib.h>

struct funcionario {
    char nome[100];
    float salario;
};

int main() {
    struct funcionario *colaborador;

    colaborador = (struct funcionario *) malloc(sizeof(struct funcionario));

    printf("Digite o nome do colaborador: ");
    scanf("%s", colaborador->nome);
    printf("Digite o salário do colaborador:" );
    scanf("%f", colaborador->salario);

    free(colaborador);

    printf("Nome: %s, Salário: %f\n", colaborador->nome, colaborador->salario);
}