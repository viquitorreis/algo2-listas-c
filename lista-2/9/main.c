#include <stdio.h>

struct aluno {
    char name[40];
};

int main() {
    struct aluno mtx[3][3];

    for (int ln = 0; ln < 3; ++ln) {
        for (int col = 0; col < 3; ++col) {
            printf("Nome do aluno: ");
            scanf("%s", &mtx[ln][col].name);
        }
    }


    for (int ln = 1; ln <= 3; ++ln) {
        for (int col = 1; col <= 3; ++col) {
            printf("Aluno %d: %s\n", ln*col, mtx[ln-1][col-1].name);
        }
    }

    return 0;
}