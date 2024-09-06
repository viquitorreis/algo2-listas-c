#include <stdio.h>

int main() {
    int size = 4;
    int mtx[size][size][size];

    printf("mtx: %p\n", mtx);

    for (int ln = 0; ln < size; ++ln) {
        printf("mtx[%d]: %p\n", ln, mtx[ln]);
        for (int col = 0; col < size; ++col) {
            printf("mtx[%d][%d]: %p\n", ln, col, &mtx[ln][col]);
            for (int dep = 0; dep < size; ++dep) {
                printf("mtx[%d][%d][%d]: %p\n", ln, col, dep, &mtx[ln][col][dep]);
            }
        }
    }

    return 0;
}