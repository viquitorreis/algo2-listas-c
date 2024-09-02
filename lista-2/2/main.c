#include <stdio.h>

int main() {
    float mtx[3][3];
    for (int ln = 0; ln < 3; ++ln) {
        for (int cl = 0; cl < 3; ++cl) {
            printf("%p\n", &mtx[ln][cl]);
        }
    }
}